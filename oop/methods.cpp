// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

class myClass{
    public:
    void fun(){
        cout<<"method caleed";
    }
};

int fun2(){
    cout<<"functin called";
    return 4;
}

int main(){
     myClass z; //creating object
     z.fun(); //calling method inside the object
}