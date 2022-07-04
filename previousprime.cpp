#include <iostream>
#include<math.h>
using namespace std;
bool isPrime(int number)
{
    if(number==2){
        return true;
    }
    if(number==1||number%2==0){
       return false;
    }
    for (int i = 3; i <= sqrt(number); i+=2)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int number;
    cout << "Enter a prime number  : ";
    cin >> number;
    if(isPrime(number)!=true){
        cout<<"You enter wrong input";
    }
    else
    {for(int i=number-1; ;i--){
        if(isPrime(i)==true){
            cout<<"Previous prime number is = "<<i;
            break;
        }
    }
    }
}