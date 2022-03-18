#include <iostream>
using namespace std;
int main()
{
    char name[8];
    cout << "enter alhpabets = ";
    for (int i = 0; i < 8; i++)
    {
        cin >> name;
    }
    for (int i = 0; i < 8; i++)
    {
        cout << name[i] << endl;
    }
    return 0;
}