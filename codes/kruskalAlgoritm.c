#include <stdio.h>
#define EDGES 14
#define VERTICES 9
int arr[9] = {0, 1, 2, 3, 4, 5, 6, 7, 8}; // initialize
struct graph
{
    int u; // the starting point of edge
    int v; // the ending of edge
    int w; // weight on edge
};
int cost;
struct graph G[EDGES] =
    {
        {6, 7, 2},
        {2, 8, 4},
        {5, 6, 4},
        {0, 1, 8},
        {2, 5, 8},
        {6, 8, 12},
        {2, 3, 14},
        {7, 8, 14},
        {0, 7, 16},
        {1, 2, 16},
        {3, 4, 18},
        {4, 5, 20},
        {1, 7, 22},
        {3, 5, 28}};
void sort()
{
    struct graph temp;
    for (int i = 0; i < EDGES - 1; i++)
    {
        for (int j = 0; j < EDGES - i - 1; j++)
        {
            if (G[j].w > G[j + 1].w)
            {
                temp = G[j];
                G[j] = G[j + 1];
                G[j + 1] = temp;
            }
        }
    }
}
// void Union(int u, int v)
// {
//     for (int i = 0; i < VERTICES; i++)
//     {
//         if (arr[i] == u)
//         {
//             arr[i] = v;
//         }
//     }
// }
// int find(int u, int v)
// {
//     int i = arr[u];
//     int j = arr[v];
//     if (i != j)
//     {
//         printf("(%d , %d)\n", u, v);
//         Union(i, j);
//         return 1;
//     }
//     else
//     {
//         printf("discard\n");
//         return 0;
//     }
// }
int root(int i)
{
    while (i != arr[i])
    {
        i = arr[i];
    }
    return i;
}
void Union(int u, int v)
{
    int ru = root(u);
    int rv = root(v);
    arr[ru] = rv;
}
int find(int u, int v)
{
    if (root(u) != root(v))
    {
        printf("(%d , %d)\n", u, v);
        Union(root(u), root(v));
        return 1;
    }
    else
    {
        printf("discard\n");
        return 0;
    }
}
int main()
{
    sort();
    for (int i = 0; i < EDGES; i++)
    {
        printf("%d %d %d\n", G[i].u, G[i].v, G[i].w);
    }

    int count = 0;
    for (int i = 0; i < EDGES; i++)
    {
        int res = find(G[i].u, G[i].v);
        if (res == 1)
        {
            cost += G[i].w;
            count++;
            if (count == VERTICES - 1)
            {
                break;
            }
        }
    }
    printf("MST cost : %d\n", cost);
}
