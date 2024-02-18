// Brute Force

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int k;
    cout<<"Enter the k: ";
    cin>>k;

    int maxs = INT_MIN;
    for(int i=0; i<=n-k; i++){ // no. ops = n-k
        int sum = 0;
        for(int j=i; j<i+k; j++){ //k
            sum += arr[j];
        }
        maxs = max(maxs,sum);
    }
    //total no. ops = O(n*k)
    cout<<"The Max sum = "<<maxs;
    return 0;
}