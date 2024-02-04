#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of lines: ";
    cin>>n;
    for(int i=n+1;i>1;i--){
        for(int j=1;j<=2*n+1;j++){
            // int a=n-i+1;
            int b=j;
            if(b>n+1) b=(2*n+2)-j;
            if((i==b)|| (j==n+1)) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }

    for(int i=1;i<=2*n+1;i++){
        cout<<"*";
    }
     cout<<endl;

    for(int i=2;i<=n+1;i++){
        for(int j=1;j<=2*n+1;j++){
            // int a=n-i+1;
            int b=j;
            if(b>n+1) b=(2*n+2)-j;
            if((i==b)|| (j==n+1)) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
