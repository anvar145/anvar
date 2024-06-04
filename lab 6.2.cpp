#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

const int INF = numeric_limits<int>::max();

struct Edge {
    int to;
    int cost;
};

vector<vector<Edge>> graph;
vector<int> prices;
vector<int> dist;

void dijkstra(int start) {
    dist[start] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    q.push({ 0, start });

    while (!q.empty()) {
        int v = q.top().second;
        int d_v = q.top().first;
        q.pop();

        if (d_v != dist[v]) continue;

        for (const Edge& e : graph[v]) {
            int to = e.to;
            int cost = d_v + prices[v];
            if (dist[to] > cost) {
                dist[to] = cost;
                q.push({ dist[to], to });
            }
        }
    }
}

int main() {
    int N, M;
    cin >> N;
    prices.resize(N);
    for (int i = 0; i < N; ++i) {
        cin >> prices[i];
    }
    cin >> M;
    graph.resize(N);
    for (int i = 0; i < M; ++i) {
        int u, v;
        cin >> u >> v;
        u--; v--; // adjust to 0-based indexing
        graph[u].push_back({ v, 1 });
        graph[v].push_back({ u, 1 });
    }

    dist.resize(N, INF);
    dijkstra(0);

    if (dist[N - 1] == INF) {
        cout << -1 << endl;
    }
    else {
        cout << dist[N - 1] << endl;
    }

    return 0;
}
