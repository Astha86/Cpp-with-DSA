#include<iostream>
using namespace std;

class Student{
public:
    string name;
    int rno;
    float marks;

    Student(string n, int r, float m){
        name = n;
        rno = r;
        marks = m;
    }
};

void change(Student* s){
    s->name = "Astha Sahani";
}

int main(){
    // We can initialize the all data members at a time via constructor

    Student s("Astha",24,96.4);
    
    // s.name = "Astha Sahani";
    // s.rno = 28;
    // s.marks = 93.7;
    cout<<s.name<<endl;
    change(&s);
    cout<<s.name;
    return 0;
}