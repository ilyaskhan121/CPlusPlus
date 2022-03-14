#include<iostream>
using namespace std;
int main(){
    int a=100;
    int*ptr;
    ptr=&a;
    cout<<"value of a = "<<*ptr<<endl;
    cout<<"address of a = "<<ptr;

}