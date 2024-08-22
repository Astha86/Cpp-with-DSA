// Question - Find the shortest distance from source to each vertices 

#include <bits/stdc++.h>
using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;
vector<vector<int>> result;

int v; // no of vertices
void add_edge(int src, int dest, bool bi_dir = true) {
    graph[src].push_back(dest);
    if(bi_dir) graph[dest].push_back(src);
}

void bfs(int src, vector<int> &dist) {
    queue<int> q;
    visited.clear();
    dist.resize(v, INT_MAX);
    dist[src] = 0;
    visited.insert(src);
    q.push(src);

    while(!q.empty()){
        int curr = q.front();
        cout<<curr<<" ";
        q.pop();
        for(auto neighbour : graph[curr]){
            if(!visited.count(neighbour)){
                q.push(neighbour);
                visited.insert(neighbour);
                dist[neighbour] = 1 + dist[curr];
            }
        }
    }
    cout<<endl;
}

int main(){
    cin>>v;
    graph.resize(v, list<int> ());
    int e;
    cin>>e;
    visited.clear();

    while(e--) {
        int s, d;
        cin>>s>>d;
        add_edge(s, d);
    }

    int x;  //source vertex
    cin>>x;
    vector<int> d;   // distance vector
    bfs(x, d);

    for(int i = 0; i < d.size(); i++) {
        cout<<d[i]<<" ";
    }
    return 0;
}