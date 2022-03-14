#include<iostream>
int power(int,int);
using namespace std;
int main(){
    int exp;
    cout<<"enter number for expnent : ";
    cin>>exp;
    int b ;
    cout<<"enter number for base : ";
    cin>>b;
   power(exp,b);
}
int power(int exponent,int base){
    if(exponent==0){
    return 1;}
    int result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result = result * base;
    }
    cout<<"result : "<<result;
    
}