#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    reverse(s.begin(),s.end());
    cout<<"Reversed : "<<s<<endl;
    sort(s.begin(),s.end());
    cout<<"Sorted : "<<s<<endl;
    // laxographical order(Sorting) follows the ascii value not the alphabetical order
    return 0;
}