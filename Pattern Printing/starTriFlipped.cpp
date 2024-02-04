#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter the number of row: ";
    cin>>r;
    for(int i=1; i<=r; i++){
        for(int j=1; j<r+1-i; j++){
        cout<<" ";
    }

        for(int s=1; s<=i; s++){
            cout<<s;
        }
       cout<<endl;
    }
    return 0;
}