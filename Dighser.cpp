#include <bits/stdc++.h>
using namespace std;

vector<int> G[100], W[100], dist;

int dikjstra(int u, int destination, int nodes) {
    dist.resize(nodes+2, 1e5);
    dist[u] = 0;
    priority_queue<pair<int, int> > pq;
    pq.push({0, -u});

    while(!pq.empty()) {
        int u = -pq.top().second;
        int wu = -pq.top().first;
        pq.pop();

        if(u == destination) return dist[u];
        if(wu > dist[u]) continue;

        for(int i = 0; i < G[u].size(); i++) {
            int v = G[u][i];
            int wv = W[u][i];

            if(wu + wv < dist[v]) {
                dist[v] = wu + wv;
                pq.push({-dist[v], -v});
            }
        }
    }
    return -1;
}

int main() {
    int u, v, w, E, N;

    cout << "Enter number of nodes: ";
    cin >> N;

    cout << "Enter number of edge : ";
    cin >> E;

    for(int i = 1; i <= E; ++i) {
        cout << "Enter edge " << i << ": ";
        cin >> u >> v >> w;
        G[u].push_back(v);
        G[v].push_back(u);

        W[u].push_back(w);
        W[v].push_back(w);
    }

    int source, dest;
    cout << "Enter source and destination node : ";
    cin >> source >> dest;

    cout << "Distance: " << dikjstra(source, dest, N);

    return 0;
}

