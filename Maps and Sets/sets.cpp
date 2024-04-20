#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(2); // sets consists only unique elements if we try to insert any 
    //element multiple times then insertion will be not done, it completely ignores the repetative elements

    cout<<"Size : "<<s.size()<<endl; 

    // Display all the elements through for each loop (unorderd printing)
    for(int x : s){
        cout<<x<<" ";
    }
    cout<<endl;

    
    // verify that elements exists or not through s.find()
    int target = 8;
    // s.find() = It searches in set and if value not exist then return s.end()
    if(s.find(target) == s.end()) cout<<target<<" is not exists int the sets."<<endl;
    else cout<<target<<" is exists int the sets."<<endl;



    return 0;
}