#include<iostream>
using namespace std;
int getFactorial(int n){
    if (n==0)
    {
        return 1;
    }
    if (n>0)
    {
        n = n * getFactorial(n-1);
    }
    return n;
    
    
}
int main(){
    int n;
    cout<<"enter number for factorial : ";
    cin>>n;
    int result = getFactorial(n);
    cout<<"factorial is : "<<result;
    return 0;
}