#include<iostream>
using namespace std;
bool isPrime(int);
int main(){
int n;
cout<<"enter number : ";
cin>>n;
bool flag=isPrime(n);
if(flag=true){
    cout<<" prime";
}
else
{
    cout<<"not prime";
}
}
bool isPrime(int number){
    int count=0;
for(int i=2;i<=number;i++){
    if(number%2==0){
        count++;
    }
}
if (count==1)
{
    return false;
}
else
return true;
}