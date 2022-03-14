#include <iostream>
#include <math.h>
bool nextprime(int);
using namespace std;
int main()
{
    int prime;
    cout << "enter a prime number   : ";
    cin >> prime;
    for (int i = prime + 1;; i++ )
    {
        if (nextprime(i) == true)
        {
            cout << " greater prime is : " << i<<endl;
            break;
        }
    }
     for (int i = prime - 1;; i-- )
    {
        if (nextprime(i) == true)
        {
            cout << "smaller prime  is : " << i;
            break;
        }
    }
}
bool nextprime(int variable)
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