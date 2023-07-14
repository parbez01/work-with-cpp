
#include <bits/stdc++.h>
using namespace std;

vector<int> G[100];
vector<int> W[100];

int main() {
    int u, v, w, E, N;

    cout << "Enter number of nodes: ";
    cin >> N;

    cout << "Enter number of edge : ";
    cin >> E;

    for(int i = 1; i <= E; ++i) {
        cout << "Enter edge " << i << ": ";
        cin >> u >> v >> w;
        // Adding edge
        G[u].push_back(v);
        G[v].push_back(u);
        // Adding weight
        W[u].push_back(w);
        W[v].push_back(w);
    }

    cout << "Printing the graph :";
    cout << "----------------------------\n";

    for(int i = 1; i <= N; ++i) {
        for(int j = 0; j < G[i].size(); ++j) {
            cout << "Edge " << i << " -- " << G[i][j] << " Weight " << W[i][j] << endl;
        }
    }

    return 0;
}
