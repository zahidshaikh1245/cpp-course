#include <iostream>
using namespace std;

class students{
    int rollNo;
    int marks;
    int age;
}

int main(){
    students s1;
    s1.rollNo=1;
    s1.marks=92;
    s1.age=23;

    cout<<s1.rollNo;
    cout<< s1.marks;
    cout<<s1.age;
}