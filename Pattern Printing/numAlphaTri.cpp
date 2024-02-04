#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==1){
            for(int j=1;j<=i;j++){
                cout<<j<<" ";
            }
        }

        else{
            int a=65;
            for(int j=1;j<=i;j++){
                cout<<(char)a<<" ";
                a++;
            }
        }
        cout<<endl;
    }
    return 0;
}