#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";

    vector<int> v(n,0);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int x = 0;
    for(int i=0; i<n; i++){
        int min = INT_MAX;
        int minidx = -1;
        for(int j=0; j<n; j++){
            if (v[j] == 1) continue;
            else{
                if(arr[j]<min){
                    min = arr[j];
                    minidx = j;
                }
            }
        }
        arr[minidx] = x;
        v[minidx] = 1;
        x++;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}