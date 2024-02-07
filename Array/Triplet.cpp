#include<iostream>
using namespace std;
int main(){

    int n,count=0;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int x;
    cout<<"Enter the Key: ";
    cin>>x;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k] == x){
                    cout<<"("<<i<<","<<j<<","<<k<<")"<<endl;
                    count++;
                }
            }
        }
    }
    cout<<"No. of triplets : "<< count;
    return 0;
}