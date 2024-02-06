#include<iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter no. of rows: ";
    cin >> x;
    for(int n=0;n<=x;n++){
    int curr = 1;
        for(int r=0;r<=n;r++){
            cout<<curr<<" ";
            curr = curr*(n-r)/(r+1);
        }
        cout<<endl;
    }
    return 0;
}
