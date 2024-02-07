// #include<iostream>
// using namespace std;
// int unique(int a[],int s){
//     int ans=0;
//     for(int i=0; i<s; i++){
//         ans = ans^a[i];
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cout<<"Enter size of the array: ";
//     cin>>n;
//     int a[n];
//     cout<<"Enter the elements of the array: \n";
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     cout<<"The Unique element = "<<unique(a,n);
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,4,1,3,2,1,4,5};
    int size=9;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                arr[i]=arr[j]=-1;
            }
        }
    }
    for(int i=0;i<size;i++){
        if(arr[i]>0){
            cout<<"The Unique element = "<<arr[i];
        }
    }
    return 0;
}