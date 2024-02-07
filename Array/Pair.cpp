#include<iostream>
using namespace std;
int main(){
    int arr[]={3,4,6,7,1};
    int ts=7;
    int c=0;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]+arr[j]==ts){
                c++;
                cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
            }
        }
    }
    cout<<"Total no. of pairs = "<<c;
    return 0;
}