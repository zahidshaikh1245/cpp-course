#include <iostream>
#include <string>
using namespace std;

class bank{
   
    int accountNumber;
    public:
    string name;
    int age;
    bank(){
        cout<<"account created"<<endl; 
    }
    
    protected:
    int balance;
    
    };

  

int main(){
    bank c1;
    
    c1.name="zahid";
    c1.age =25;
    cout<<c1.name<<endl<< c1.age<<endl;
    
    
    bank c2;
    c2.name="wahid";
    c2.age =26;
    cout<<c2.name<<endl<< c2.age<<endl;
}
