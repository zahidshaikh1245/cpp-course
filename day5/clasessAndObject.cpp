#include<iostream>
#include<string>
using namespace std;

class Student{
    string name;
    int age;
    float cgpa;
    string branch;
};
int main()
{
    Student s1;
    s1.name="raj";
    s1.age=15;
    s1.cgpa=98.30;
    s1.branch="IT";

    cout<<s1.name<<s1.age<<s1.cgpa<<s1.branch;
    return 0;
}