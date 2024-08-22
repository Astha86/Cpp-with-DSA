#include<bits/stdc++.h>
using namespace std;

// T.C = O(v+e)

vector<list<int>> graph;
int v;
 
void add_edge(int src, int des, bool bi_dir = true){
    graph[src].push_back(des);
    if(bi_dir) graph[des].push_back(src);
}

bool bfs(int src){
    unordered_set<int> vis;
    queue<int> q;
    vector<int> parent(v, -1);
    q.push(src);
    vis.insert(src);

    while(!q.empty()){
        int curr = q.front();
        q.pop();
        for(auto neighbour : graph[src]){
            // cycle detected case...
            if(vis.count(neighbour) && neighbour != parent[curr]){
                return true; 
            }

            if(!vis.count(neighbour)){
                vis.insert(neighbour);
                parent[neighbour] = curr;
                q.push(neighbour);
            }
        } 
    }
    return false;
}

bool has_cycle() {
    unordered_set<int> vis;
    for(int i=0; i<v; i++){
        bool result = bfs(i);
        if(result) return true;
    }
    return false;
}

int main(){
    cin>>v;
    graph.resize(v, list<int> ());
    int e;
    cin>>e;
    while(e--){
        int s,d;
        cin>>s>>d;
        add_edge(s,d);
    }
    bool ans = has_cycle();
    if(ans) cout<<"Cycle Detected !!"<<endl;
}