#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max = INT_MIN;
    int smax = INT_MIN;
    int max3 = INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]) { 
            max3 = smax;
            smax = max;
            max = arr[i];
        }
        else if(smax<arr[i] && arr[i]!=max){
             smax = arr[i];   
        }
        else if(max3<arr[i] && arr[i]!=smax && arr[i]!=max){
             max3 = arr[i];   
        }
    }
    cout<<max<<endl<<smax<<endl<<max3;
    return 0;
}