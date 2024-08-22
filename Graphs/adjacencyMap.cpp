#include<bits/stdc++.h>
using namespace std;

vector<unordered_map<int,int>> graph;
int v;
 
void add_edge(int src, int des, int wt, bool bi_dir = true){
    graph[src][des] = wt;  // graph k  src pe jo destination h uski value wt se map kr di gyi hai
    if(bi_dir) graph[des][src] = wt; 
}

void display(){
    for(int i=0; i<graph.size(); i++){
        cout<<i<<" -> ";
        for(auto el : graph[i]){
            cout<<"("<<el.first<<","<<el.second<<")"<<" , ";
        }
        cout<<endl;
    }
}

int main(){
    cin>>v;
    graph.resize(v, unordered_map<int,int> ());
    int e;
    cin>>e;
    
    while(e--){
        int s,d,wt;
        cin>>s>>d>>wt;
        add_edge(s,d,wt);
    }
    display();
}