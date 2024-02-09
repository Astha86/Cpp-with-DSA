#include<bits/stdc++.h>
using namespace std;

// 1st Method

// int main(){
//     string s;
//     cout<<"Enter the string: ";
//     cin>>s;
//     int n = s.size();
//     int idx = -1;
//     int max = 0;
//     // int idx2 = -1;
//     // int max2 = 0;
//     for(int i=0; i<n-1; i++){
//         int count = 1;
//         for(int j=i+1; j<n; j++){
//             if(s[i] == s[j]){
//                 count++;
//                 if(max<=count){                
//                     // idx2 = idx;
//                     // max2 = max;
//                     idx = i;
//                     max = count;
//                     // if(max2 == max){
//                     //     cout<<"The most occuring character is "<<s[idx2]<<endl;
//                     //     cout<<"No. of Occurence :"<<max2<<endl;
//                     // }
//                 }
//             }
//         }
//     }
//     cout<<"The most occuring character is "<<s[idx]<<endl;
//     cout<<"No. of Occurence :"<<max<<endl;
//     return 0;
// }

// 2nd Method
int main(){
    string s;
    cout<<"Enter the string: ";
    getline(cin,s);
    int n = s.size();
    vector<int> v(26,0);
    for(int i=0; i<n; i++){
        char c = s[i];
        int ascii = (int)c;
        v[ascii-97]++;
    }

    int max = 0;
    for(int i=0; i<26; i++){
        if(max<v[i]) max = v[i]; 
    }

    for(int i=0; i<26; i++){
        if(max == v[i]) {
            int ascii = i + 97;
            char c = (char)ascii;
            cout<<c<<" - "<<max<<endl;
        }
    }
    return 0;
}