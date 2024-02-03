#include<iostream>
using namespace std;
int main(){
    // 1-2+3-4+5-6...n
    int n,sum=0;
    cout<<"Enter the limit to sum of natural numbers: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2!=0) sum+=i;
        else sum-=i;
    }
    cout<<"The sum is "<<sum;
    return 0;
}