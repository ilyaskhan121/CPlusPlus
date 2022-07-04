#include <iostream>
using namespace std;
class Element
{
private:
    int value;

public:
    Element(int a)
    {
        cout << "ELEMENT IS CONSTRUCTED !" << endl;
        value = a;
    }
    void Show()
    {
        cout << " NUMBER = " << value << endl;
    }
};
class Collection
{
private:
    Element e1;

public:
    Collection() : e1(5)
    {
        cout << "COLLECTION IS CONSTRUCTED !" << endl;
    }
    void Print()
    {
        e1.Show();
    }
};
int main()
{
    Collection c1;
    c1.Print();
}