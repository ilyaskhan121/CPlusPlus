#include <iostream>
#include <cstring>
using namespace std;
class Students
{
private:
    char name[50];
    double gpa;

public:
    Students()
    {
        char n[50] = " ";
        double gp = 0;
        cout << "I am constructor here : " << endl;
    }
    void get()
    {
        char nm[50];
        cout << "Enter NAME :  ";
        cin.getline(nm, sizeof(nm));
        strcpy(name, nm);
        double g;
        cout << "Enter GPA : ";
        cin >> g;
        gpa = g;
        cin.ignore();
    }
    void show()
    {
        cout << "Name = " << name << endl;
        cout << "GPA = " << gpa << endl;
    }
};
int main()
{
    Students s1;
    s1.get();
    s1.show();
    Students s2;
    s2.get();
    s2.show();
}