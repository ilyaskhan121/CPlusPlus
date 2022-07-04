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
    cout << "Enter a number for prime test : ";
    cin >> number;
    bool check = isPrime(number);
    if (!check)
        cout << "Number is not prime  ";
    else
        cout << "Number is prime  ";
}