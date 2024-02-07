#include<iostream>
using namespace std;

void factorial(int x){
    int fact = 1;
    for(int i=1;i<=x;i++){
        fact *= i;
    }
    cout<<"Factorial of "<<x<<" : "<<fact<<endl;
}

int main(){

    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int max = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    cout<<"The largest no. in the array : "<<max<<endl;
    factorial(max);
    return 0;
}