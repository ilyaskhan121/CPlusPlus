#include <iostream>
#include <math.h>
using namespace std;
int sum(int, int);
int pow(int, int);
int main()
{

    int array[] = {34, 43, 4, 3, 4, 3, 4, 342, 89, 32};
    int max = 0;
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    {
        if (array[i] > max)
            max = array[i];
    }
    cout << endl
         << "max : " << max;
}

int sum(int x, int y)
{
    int add = x + y;
    cout << "sum is = " << add;
    return add;
}

int pow(int base, int exp)
{
    int result = 1;
    for (int i = 0; i < abs(exp); i++)
    {
        result *= base;
    }
    return exp < 0 ? 1 / result : result;
}