#include<iostream>
using namespace std;

class Student{
public:
    string name;
    int rno;
    float marks;

    Student(string name, int rno, float marks){
        this->name = name;
        this->rno = rno;
        this->marks = marks;
    }
};

void change(Student* s){
    s->name = "Astha Sahani";
}

int main(){
    // We can declare the object as an pointer

    Student* s = new Student("Astha",24,96.4); // dynamically allocate
    cout<<s->name<<endl;
    change(s);
    cout<<s->name;
    return 0;
}