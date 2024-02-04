#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int a=1;
    int b=n-1;
    for(int i=1;i<2*n;i++){
        cout<<"*";
    }
    cout<<endl;

    for(int i=1;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        
        for(int j=1;j<=a;j++){
            cout<<" ";
        }
        a+=2;

        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=1;i<n-1\
    ;i++){
        for(int j=1;j<=i+1;j++){
            cout<<"*";
        }
        
        for(int j=1;j<=b;j++){
            cout<<" ";
        }
        b-=2;

        for(int j=1;j<=i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=1;i<2*n;i++){
        cout<<"*";
    }
    return 0;
}