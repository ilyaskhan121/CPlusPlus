#include <iostream>
void function(int *);
using namespace std;
int main()
{
    int a = 40;
    cout << "value of a =" << a << endl;
    function(&a);
    cout << " new value of a=" << a << endl;
    return 0;
}
void function(int *ptr)
{
    *ptr=65;
    
}