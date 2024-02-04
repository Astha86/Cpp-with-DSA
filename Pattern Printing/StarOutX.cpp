#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int a = n+1;
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }

        for(int j=1;j<=a;j++){
            cout<<" ";
        }
         a-=2;

        for(int j=1;j<=i;j++){
            cout<<"*";
        }

        cout<<endl;
    }

    for(int i=1;i<=n/2;i++){
        for(int j=1;j<2*n;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    int b=1;
    for(int i=1;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }

        for(int j=1;j<=b;j++){
            cout<<" ";
        }
        b+=2;
        
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
