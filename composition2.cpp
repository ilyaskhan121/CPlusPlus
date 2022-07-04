#include <iostream>
using namespace std;
class A
{
private:
    int x;

public:
    int y;
    A(int a, int b)
    {
        x = a;
        y = b;
    }
    void Show()
    {
        cout << "FIRST NUMBER = " << x << endl;
        cout << "SECOND NUMBER = " << y << endl;
    }
};
class B
{
private:
    int z;

public:
    A object_a;
    B(int a, int b, int c) : object_a(a, b)
    {
        z = c;
    }
    void Print()
    {
        object_a.Show();
        cout << "THIRD NUMBER = " << z << endl;
    }
};
int main()
{
    B object_b(4, 5, 6);
    object_b.Print();
}