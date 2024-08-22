#include <bits/stdc++.h>
#define ll long long int
#define pi pair<int, int>
using namespace std;

vector<list<pi>> graph;
void add_edge(int u, int v, int wt, bool bidir=true) {
    graph[u].push_back({v, wt});
    if(bidir) graph[v].push_back({u, wt});
}

ll prims(int src, int n){
    priority_queue<pi, vector<pi>, greater<pi> > pq; // {weight, node}
    unordered_set<int> vis;
    vector<int> par(n+1);
    unordered_map<int, int> mp;
    for(int i=1; i<=n; i++) {
        mp[i] = INT_MAX;
    }
    pq.push({0, src});
    mp[src] = 0;
    int total_count = 0; // 0 -> n-1 edges
    int result = 0; // sum of weights
    while(total_count < n && !pq.empty()) {
        pi curr = pq.top();
        if(vis.count(curr.second)) {
            pq.pop();
            continue;
        }
        vis.insert(curr.second);
        total_count++;
        result += curr.first;
        pq.pop();

        for(auto neighbour : graph[curr.second]) {
            if(!vis.count(neighbour.first) && mp[neighbour.first] > neighbour.second){
                pq.push({neighbour.second, neighbour.first});
                par[neighbour.first] = curr.second;
                mp[neighbour.first] = neighbour.second;
            }
        }

    }
    return result;
}

int main() {
    int n, m;
    cin>>n>>m;
    graph.resize(n+1, list<pi> ());
    while(m--){
        int u, v, wt;
        cin>>u>>v>>wt;
        add_edge(u, v, wt);
    }

    int src;
    cin>>src;
    cout<<prims(src, n)<<endl;
    return 0;
}