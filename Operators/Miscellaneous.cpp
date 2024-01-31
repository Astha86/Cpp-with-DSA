#include<iostream>
using namespace std;
int main(){
    int num=8;
    char c='a';
    cout<<sizeof(num)<<endl; //4
    cout<<sizeof(c)<<endl; //1
    5==5?cout<<"True\n":cout<<"False"<<endl;
    cout<<(&num)<<endl;  //& memory operator it gives the memory of the address
    return 0;
}
