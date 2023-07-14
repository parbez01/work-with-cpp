#include <bits/stdc++.h>
using namespace std;
vector<int> G[110];
bool visited[110];

void BFS(int source)
{
    queue<int> q;
    q.push(source);
    visited[source] = true;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        cout << "Currently at node -> " << u << endl;
        for (int i = 0; i < G[u].size(); ++i)
        {
            int v = G[u][i];
            if (!visited[v])
            {
                visited[v] = 1;
                q.push(v);
            }
        }
    }
}

int main()
{
    int V, E, s, u, v;
    cin >> V >> E;
    for (int i = 0; i < E; ++i)
    {
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    cout << "Enter source: ";
    cin >> s;
    BFS(s);
    return 0;
}
