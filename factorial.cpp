#include<iostream>
using namespace std;
int factorial(int number){
    if(number==0){
        return 1;
    }
    int result=1;
    for(int i=1;i<=number;i++){
        result=result*i;
    }
    return result;
}
int main(){
    int number ;
    cout<<"Enter a number for factorial : ";
    cin>>number;
    cout<<"Factorial is = "<<factorial(number);
}