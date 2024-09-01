#include<iostream>
using namespace std;

int main(){
   int nums[10]={9,6,5,4,12,11,10,7,8,10};
    int largest = nums [0];
    for (int i=0; i<10; i++){
        if(largest < nums [i]){
            largest = nums[i];
        }
    }
    cout<<largest;
}