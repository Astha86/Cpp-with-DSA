// it is the sorting which is use in the inbuilt sorting 
#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int si, int ei){
    int pivotele = arr[si];
    int count = 0;
    for(int i=si+1; i<=ei; i++){
        if(arr[i]<=pivotele) count++;
    }
    int pivotidx = count+si;
    swap(arr[si],arr[pivotidx]);
    int i = si;
    int j = ei;
    while(i<pivotidx && j>pivotidx){
        if(arr[i]<=pivotele) i++;
        else if(arr[j]>pivotele) j--;
        else{
            if((arr[i]>pivotele) && (arr[j]<=pivotele)){
                swap(arr[i++],arr[j--]);
            }
        }
    }
return pivotidx;

}

void quicksort(int arr[], int si, int ei){
    if(si>=ei) return ;

    int pivotidx = partition(arr,si,ei);

    quicksort(arr,si,pivotidx-1);
    quicksort(arr,pivotidx+1,ei);
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

    quicksort(arr,0,n-1);

    cout<<"After sorting : \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}