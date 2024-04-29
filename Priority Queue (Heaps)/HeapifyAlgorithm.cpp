#include<bits/stdc++.h>
using namespace std;

void print(int arr[] , int n){
    for(int i=1; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void heapify(int i, int arr[], int n){
    while(1){
        int l = i*2;
        int r = l+1;
        if(l>=n) break;
        if(r>=n){
            if(arr[i]>arr[l]){
                swap(arr[i],arr[l]);
                i = l;
            }
            break;
        }

        if(arr[l]<arr[r]){
            if(arr[i]>arr[l]){
                swap(arr[i],arr[l]);
                i = l;
            }
            else break;
        }

        else{
            if(arr[i]>arr[r]){
                swap(arr[i],arr[r]);
                i = r;
            }
            else break;
        }
    }
}

int main(){
    int arr[] = {INT_MAX, 10, 2 ,14 , 11, 1, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    print(arr, n);
    for(int i=n/2; i>=1; i--){
        heapify(i,arr,n);
    }
    print(arr,n);
    return 0;
}