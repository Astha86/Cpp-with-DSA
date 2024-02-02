#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter any letter : ";
    cin>>c;
    switch(c){
        case 'a':
            cout<<"It is a vowel.";
            break;
        case 'e':
            cout<<"It is a vowel.";
            break;
        case 'i':
            cout<<"It is a vowel.";
            break;
        case 'o':
            cout<<"It is a vowel.";
            break;
        case 'u':
            cout<<"It is a vowel.";
            break;
        default:
            cout<<"It is a consonents.";
    }
    return 0;
}