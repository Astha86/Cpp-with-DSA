#include<iostream>
#include<vector>
using namespace std;
int main(){
    int s;
    cout<<"Enter the size: ";
    cin>>s;
    vector<int> v;
    int arr[s];

    cout<<"Enter the elements of the vector: ";
    for(int i=0;i<s;i++){
        int x;
        cin>>x;
        v.push_back(x);
        // cin>>arr[i];
    } 

    int sum = 0;
    int x = 1;
    for(int i=s-1; i>=0; i--){
        if(v[i] == 1){
            sum += v[i]*x;
        }
        x *= 2;
    }

    cout<<"The decimal number is "<<sum;
    return 0;
}