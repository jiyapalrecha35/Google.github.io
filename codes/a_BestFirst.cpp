#include <bits/stdc++.h>
using namespace std;

#define ROW 8 // Number of rows in the grid
#define COL 8 // Number of columns in the grid

// Creating a shortcut for int, int pair type
typedef pair<int, int> Pair;

// Creating a shortcut for pair<double, pair<int, int>> type
typedef pair<double, pair<int, int>> pPair;

// A structure to hold the necessary parameters
struct cell {
    // Row and Column index of its parent
    // Note that 0 <= i <= ROW-1 & 0 <= j <= COL-1
    int parent_i, parent_j;
    // f = g + h
    double f, g, h;
};

// A Utility Function to check whether given cell (row, col)
// is a valid cell or not.
bool isValid(int row, int col)
{
    // Returns true if row number and column number
    // is in range
    return (row >= 0) && (row < ROW) && (col >= 0) && (col < COL);
}

// A Utility Function to check whether the given cell is
// blocked or not
bool isUnBlocked(int grid[][COL], int row, int col)
{
    // Returns true if the cell is not blocked else false
    return (grid[row][col] == 1);
}

// A Utility Function to check whether destination cell has
// been reached or not
bool isDestination(int row, int col, Pair dest)
{
    return (row == dest.first && col == dest.second);
}

// A Utility Function to calculate the 'h' heuristics.
double calculateHValue(int row, int col, Pair dest)
{
    // Return using the Manhattan distance formula
    return (abs(row - dest.first) + abs(col - dest.second));
}

// A Utility Function to trace the path from the source
// to destination
void tracePath(cell cellDetails[][COL], Pair dest)
{
    printf("\nThe Path is ");
    int row = dest.first;
    int col = dest.second;

    stack<Pair> Path;

    while (!(cellDetails[row][col].parent_i == row &&
             cellDetails[row][col].parent_j == col)) {
        Path.push(make_pair(row, col));
        int temp_row = cellDetails[row][col].parent_i;
        int temp_col = cellDetails[row][col].parent_j;
        row = temp_row;
        col = temp_col;
    }

    Path.push(make_pair(row, col));
    while (!Path.empty()) {
        pair<int, int> p = Path.top();
        Path.pop();
        printf("-> (%d,%d) ", p.first, p.second);
    }

    return;
}

// A Function to find the shortest path between
// a given source cell to a destination cell according
// to A* Search Algorithm
void aStarSearch(int grid[][COL], Pair src, Pair dest)
{
    // If the source is out of range
    if (!isValid(src.first, src.second)) {
        printf("Source is invalid\n");
        return;
    }

    // If the destination is out of range
    if (!isValid(dest.first, dest.second)) {
        printf("Destination is invalid\n");
        return;
    }

    // Either the source or the destination is blocked
    if (!isUnBlocked(grid, src.first, src.second) ||
        !isUnBlocked(grid, dest.first, dest.second)) {
        printf("Source or the destination is blocked\n");
        return;
    }

    // If the destination cell is the same as source cell
    if (isDestination(src.first, src.second, dest)) {
        printf("We are already at the destination\n");
        return;
    }

    // Create a closed list and initialise it to false which
    // means that no cell has been included yet This closed
    // list is implemented as a boolean 2D array
    bool closedList[ROW][COL];
    memset(closedList, false, sizeof(closedList));

    // Declare a 2D array of structure to hold the details
    // of that cell
    cell cellDetails[ROW][COL];

    int i, j;

    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            cellDetails[i][j].f = FLT_MAX;
            cellDetails[i][j].g = FLT_MAX;
            cellDetails[i][j].h = FLT_MAX;
            cellDetails[i][j].parent_i = -1;
            cellDetails[i][j].parent_j = -1;
        }
    }

    // Initialising the parameters of the starting node
    i = src.first, j = src.second;
    cellDetails[i][j].f = 0.0;
    cellDetails[i][j].g = 0.0;
    cellDetails[i][j].h = 0.0;
    cellDetails[i][j].parent_i = i;
    cellDetails[i][j].parent_j = j;

    /*
    Create an open list having information as-
    <f, <i, j>>
    where f = g + h,
    and i, j are the row and column index of that cell
    Note that 0 <= i <= ROW-1 & 0 <= j <= COL-1
    This open list is implemented as a set of pair of
    pair.*/
    set<pPair> openList;

    // Put the starting cell on the open list and set its
    // 'f' as 0
    openList.insert(make_pair(0.0, make_pair(i, j)));

    // We set this boolean value as false as initially
    // the destination is not reached.
    bool foundDest = false;

    while (!openList.empty()) {
        pPair p = *openList.begin();

        // Remove this vertex from the open list
        openList.erase(openList.begin());

        // Add this vertex to the closed list
        i = p.second.first;
        j = p.second.second;
        closedList[i][j] = true;

        // Generating all the 8 successor of this cell
        for (int row = -1; row <= 1; row++) {
            for (int col = -1; col <= 1; col++) {
                if (row == 0 && col == 0)
                    continue;

                int successor_i = i + row;
                int successor_j = j + col;

                // Only process this cell if this is a valid one
                if (isValid(successor_i, successor_j)) {
                    // If the destination cell is the same as the current successor
                    if (isDestination(successor_i, successor_j, dest)) {
                        // Set the Parent of the destination cell
                        cellDetails[successor_i][successor_j].parent_i = i;
                        cellDetails[successor_i][successor_j].parent_j = j;
                        printf("The destination cell is found\n");
                        tracePath(cellDetails, dest);
                        foundDest = true;
                        return;
                    }

                    // If the successor is already on the closed list or if it is blocked, then ignore it.
                                        if (!closedList[successor_i][successor_j] &&
                        isUnBlocked(grid, successor_i, successor_j)) {
                        double gNew, hNew, fNew;
                        gNew = cellDetails[i][j].g + 1.0; // Movement cost always 1

                        // Calculate the 'h' value using Manhattan distance
                        hNew = calculateHValue(successor_i, successor_j, dest);
                        fNew = gNew + hNew;

                        // If the successor is not on the open list or if it is
                        // on the open list but with a higher 'f' value
                        if (cellDetails[successor_i][successor_j].f == FLT_MAX ||
                            cellDetails[successor_i][successor_j].f > fNew) {
                            // Update the details of this successor
                            openList.insert(make_pair(fNew, make_pair(successor_i, successor_j)));

                            // Update the parent of the successor
                            cellDetails[successor_i][successor_j].f = fNew;
                            cellDetails[successor_i][successor_j].g = gNew;
                            cellDetails[successor_i][successor_j].h = hNew;
                            cellDetails[successor_i][successor_j].parent_i = i;
                            cellDetails[successor_i][successor_j].parent_j = j;
                        }
                    }
                }
            }
        }
    }

    // If the destination is not found
    if (!foundDest)
        printf("Failed to find the destination cell\n");

    return;
}

// Driver program to test above function
int main()
{
    // Here, 0 represents a blocked cell and 1 represents an unblocked cell
    int grid[ROW][COL] =
    {
        {1, 0, 1, 1, 1, 1, 0, 1},
        {1, 1, 1, 0, 1, 1, 1, 1},
        {1, 1, 1, 0, 1, 1, 0, 1},
        {0, 0, 1, 0, 1, 0, 0, 1},
        {1, 1, 1, 0, 1, 1, 1, 1},
        {1, 0, 1, 1, 1, 1, 0, 1},
        {1, 0, 0, 0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1, 1, 1, 1}
    };

    // Source is the left-most bottom-most corner
    Pair src = make_pair(7, 0);

    // Destination is the left-most top-most corner
    Pair dest = make_pair(0, 0);

    aStarSearch(grid, src, dest);

    return(0);
}
