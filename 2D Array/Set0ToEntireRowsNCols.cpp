#include<iostream>
using namespace std;
int main(){

    int r;
    cout<<"Enter the number of rows: ";
    cin>>r;

    int c;
    cout<<"Enter the number of cols: ";
    cin>>c;

    int arr[r][c];
    cout<<"Enter the elements of array: \n";
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr[i][j];
        }
    }

    int idxr = -1;
    int idxc = -1;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(arr[i][j] == 0){
                idxr = i;
                idxc = j;
            }
        }
    }

    for(int i=0,j=0; i<r,j<c; i++,j++){
        arr[idxr][j] = 0;
        arr[i][idxc] = 0;
    }

    cout<<"Final Result: \n";
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//set matrix 0s
// class Solution {
// public:
//     void setZeroes(vector<vector<int>>& matrix) {
//         int r = matrix.size();
//         int c = matrix[0].size();
//         vector<int> v1(r,0);
//         vector<int> v2(c,0);

//         for(int i=0; i<r; i++){
//             for(int j=0; j<c; j++){
//                 if(matrix[i][j] == 0){
//                     v1[i] = 1;
//                     v2[j] = 1;
//                 }
//             }
//         }

//         for(int i=0; i<r; i++){
//             if(v1[i] == 1){
//                 for(int j=0; j<c; j++){
//                     matrix[i][j] = 0;
//                 }
//             }
//         }

//         for(int i=0; i<c; i++){
//             if(v2[i] == 1){
//                 for(int j=0; j<r; j++){
//                     matrix[j][i] = 0;
//                 }
//             }
//         }
//         return;
//     }
// };