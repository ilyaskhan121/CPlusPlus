#include<iostream>
using namespace std;
int pow(int base,int exponent){
int result=1;
for(int i=1;i<=exponent;i++){
    result=result*base;
}
return result;
}
int main(){
    int base;
    int expo;
    cout<<"Enter base : ";
    cin>>base;
    cout<<"Enter ecponent : ";
    cin>>expo;
    cout<<"Answer is = "<<pow(base,expo);

}