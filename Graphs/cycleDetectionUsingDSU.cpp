#include <bits/stdc++.h>
using namespace std;

int find(vector<int> &parent, int x){ // T.C: (log*n);
    // This method returns which group x belongs to...
    if(parent[x] == x) return x;
    return parent[x] = find(parent, parent[x]);
}

bool Union(vector<int> &parent, vector<int> &rank, int a, int b){
    // T.C: (log*n);
    a = find(parent, a);
    b = find(parent, b);

    if(a == b) return true;

    if(rank[a] >= rank[b]){
        rank[a]++;
        parent[b] = a;
    } 
    
    else{
        rank[b]++;
        parent[a] = b;
    }

    return false;
}


int main(){

    int n, m;
    cin>>n>>m;
    // n: elements, m: no of queries(Union/Find)

    vector<int> parent(n+1);
    vector<int> rank(n+1, 0);
    for(int i=0; i<=n; i++){
        parent[i] = i;
    }

    while(m--){
        int x, y;
        cin>>x>>y;
        bool ans = Union(parent, rank, x, y);
        if(ans) cout<<"Cycle Detected !!"<<endl;
    }

    return 0;
}