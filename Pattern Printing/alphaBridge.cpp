#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter row: ";
    cin>>n;
        for(int i=1;i<2*n;i++) {
                cout<<(char)('A'+i-1);
        }
        cout<<endl;
        for(int i=1;i<n;i++){
            int a=65;
            for(int j=1;j<=n-i;j++){
                cout<<(char)a;
                a++;
            }
            for(int j=1;j<=2*i-1;j++){
                cout<<" ";
                a++;
            }
            for(int j=1;j<=n-i;j++){
                cout<<(char)a;
                a++;
            }
            cout<<endl;
        }
    return 0;
}