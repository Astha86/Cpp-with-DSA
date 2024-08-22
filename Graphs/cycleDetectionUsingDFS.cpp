#include<bits/stdc++.h>
using namespace std;

// T.C = O(v+e)

vector<list<int>> graph;
int v;
 
void add_edge(int src, int des, bool bi_dir = true){
    graph[src].push_back(des);
    if(bi_dir) graph[des].push_back(src);
}

bool dfs(int src, int parent, unordered_set<int> &vis){
    vis.insert(src);
    for(auto neighbour : graph[src]){
        // cycle detected case...
        if(vis.count(neighbour) && neighbour != parent){
            return true; 
        }

        if(!vis.count(neighbour)){
            bool b = dfs(neighbour, src, vis);
            if(b) return true;
        }
    } 
    return false;
}

bool has_cycle() {
    unordered_set<int> vis;
    for(int i=0; i<v; i++){
        if(!vis.count(i)){
            bool result = dfs(i, -1, vis);
            if(result) return true;
        }
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