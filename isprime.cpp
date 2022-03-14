#include <iostream>
#include <math.h>
bool isprime(int);
using namespace std;
int main()
{
    int number;
    bool flag;
    cout << "Enter number for prime test  : ";
    cin >> number;
    flag = isprime(number);
    if (flag == true)
    {
        cout << "num is prime";
    }
    else
        cout << "num is not prime";
}
bool isprime(int variable)
{
    if (variable == 1)
        return false;
    if (variable % 2 == 0 && variable != 2)
        return false;
    for (int index = 3; index <= sqrt(variable); index += 2)
    {
        if (variable % index == 0)
        {
            return false;
        }
    }
    return true;
}