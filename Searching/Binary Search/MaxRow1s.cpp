#include<bits/stdc++.h>
using namespace std;
int main(){

    int r;
    cout<<"Enter the no. of rows: ";
    cin>>r;

    int c;
    cout<<"Enter the no. columns: ";
    cin>>c;

    int arr[r][c];
    cout<<"Enter the elements of the Matrix :-"<<endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr[i][j];
        }
    }
    int max = INT_MIN;
    int k = 1;
    int ans = -1;
    bool flag = false;
    
    for(int i=0; i<r; i++){
        int oc = 0;
        int hi = c-1;
        int lo = 0;
        while(lo<=hi){
            int mid = (hi + lo)/2;
            if(arr[i][mid]==k){
                if(mid==0){
                    oc = c-mid;
                    flag = true;
                    break;
                }
                else if(arr[i][mid-1]!=k){
                    oc = c-mid;
                    flag = true;
                    break;
                }
                else hi = mid-1;
            }
            else if(arr[i][mid]>k) hi = mid-1;
            else lo = mid+1;
        }
        if(max<oc){
            max = oc;
            ans = i;
        }
    }
    
    if(flag==false) cout<<"1 is not present in matrix";
    else cout<<"Maximum row : "<<ans;
    return 0;
}