#include<bits/stdc++.h>

using namespace std;

struct Edge {
    int src, dest, weight;
};

struct Graph {
    int V, E;
    vector<Edge> edge;
};

Graph* createGraph(int V, int E) {
    Graph* graph = new Graph;
    graph->V = V;
    graph->E = E;
    graph->edge.resize(E);
    return graph;
}

void printArr(const vector<int>& dist) {
    cout << "Vertex   Distance from Source\n";
    for (int i = 0; i < dist.size(); ++i)
        cout << i << "\t\t" << dist[i] << "\n";
}

void BellmanFord(Graph* graph, int src) {
    int V = graph->V;
    int E = graph->E;
    vector<int> dist(V, INT_MAX);
    dist[src] = 0;

    for (int i = 1; i <= V - 1; i++) {
        for (int j = 0; j < E; j++) {
            int u = graph->edge[j].src;
            int v = graph->edge[j].dest;
            int weight = graph->edge[j].weight;
            if (dist[u] != INT_MAX && dist[u] + weight < dist[v])
                dist[v] = dist[u] + weight;
        }
    }

    for (int i = 0; i < E; i++) {
        int u = graph->edge[i].src;
        int v = graph->edge[i].dest;
        int weight = graph->edge[i].weight;
        if (dist[u] != INT_MAX && dist[u] + weight < dist[v]) {
            cout << "Graph contains negative weight cycle\n";
            return;
        }
    }

    printArr(dist);
}

int main() {
    int V, E;
    cout << "Enter the number of vertices and edges: ";
    cin >> V >> E;
    Graph* graph = createGraph(V, E);

    cout << "Enter source, destination, and weight for each edge:\n";
    for (int i = 0; i < E; i++) {
        cin >> graph->edge[i].src >> graph->edge[i].dest >> graph->edge[i].weight;
    }

    int src;
    cout << "Enter source vertex: ";
    cin >> src;

    BellmanFord(graph, src);

    return 0;
}
