#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int si, int ei){
    int pivotele = arr[(si+ei)/2];
    int count = 0;
    for(int i=si; i<=ei; i++){
        if(i==(si+ei)/2) continue;
        if(arr[i]<=pivotele) count++;
    }
    int pivotidx = count+si;
    swap(arr[(si+ei)/2],arr[pivotidx]);
    int i = si;
    int j = ei;
    while(i<pivotidx && j>pivotidx){
        if(arr[i]<=pivotele) i++;
        if(arr[j]>pivotele) j--;
        else{
            if((arr[i]>pivotele) && (arr[j]<=pivotele)){
                swap(arr[i++],arr[j--]);
            }
        }
    }
return pivotidx;

}

int kthsmallest(int arr[], int si, int ei, int k){
    int pivotidx = partition(arr,si,ei);
    if(pivotidx+1 == k) return arr[pivotidx];
    else if(pivotidx+1 < k) return kthsmallest(arr,pivotidx+1,ei,k);
    else return kthsmallest(arr,si,pivotidx-1,k);
}

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int k;
    cout<<"Enter k : ";
    cin>>k;

    int ans = kthsmallest(arr,0,n-1,k);
    cout<<"kthsmallest : "<<ans;

    return 0;
}