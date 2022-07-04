#include <iostream>
using namespace std;
int table(int number,int limit)
{
    for (int i = 1; i <= limit; i++)
    {
        cout << number << "  *  " << i << " = " << number * i << endl;
    }
    return true;
}
int main()
{
    int num;
    cout << "enter a number : ";
    cin >> num;
    int limit;
    cout<<"Enter a limit : ";
    cin>>limit;
    table(num,limit);
}