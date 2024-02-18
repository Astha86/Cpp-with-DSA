#include<iostream>
using namespace std;

// we can travel either in rightways or downways

int ways(int sr, int sc, int er, int ec){
    if(sr==er && sc==ec) return 1;
    if(sr>er || sc>ec) return 0;
    int rightways = ways(sr, sc+1, er, ec);
    int downways = ways(sr+1, sc, er, ec);
    return downways + rightways;
}

void path(int sr, int sc, int er, int ec, string s){
    if(sr==er && sc==ec){
        cout<<s<<endl;
    }
    if(sr>er || sc>ec) return ;
    path(sr, sc+1, er, ec, s+'R');
    path(sr+1, sc, er, ec, s+'D');
}

int main(){
    int r;
    cout<<"Enter the no. of row : ";
    cin>>r;
    int c;
    cout<<"Enter the no. of column : ";
    cin>>c;
    cout<<"No. of ways: "<<ways(1,1,r,c)<<endl;
    path(1,1,r,c,""); //passing a empty string
    return 0;
}