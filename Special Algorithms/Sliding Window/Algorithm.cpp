// same ques me sum subarray

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

    int sum = 0;
    for(int i=0; i<k; i++){  //no. ops = k
        sum += arr[i];
    }
    int maxs = sum;

    int i = 1;
    int j = k;
    while(j<n){ //no. ops = n-k
        sum = sum + arr[j] - arr[i-1];
        maxs = max(maxs,sum);
        i++;
        j++;
    }
    
    //T.C = n-k +k = O(n)
    cout<<"The Max sum = "<<maxs;
    return 0;
}