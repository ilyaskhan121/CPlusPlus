#include <iostream>
#include <cstring>
using namespace std;
class Person
{
private:
    char name[50];
    int age;
    string gender;

public:
    void Get()
    {
        char nm[50];
        cout << "ENTER  NAME : ";
        cin.getline(nm, sizeof(nm));
        strcpy(name, nm);
        int ag;
        cout << "ENTER AGE : ";
        cin >> ag;
        age = ag;
        string gen;
        cout << "ENTER GENDER : ";
        cin >> gen;
        gender = gen;
    }
    void Show()
    {
        cout << "NAME = " << name << endl;
        cout << "AGE = " << age << endl;
        cout << "GENDER = " << gender << endl;
    }
};
class Employee
{
private:
    Person p1;
    int scale;
    int salary;

public:
    void get_Info()
    {
        p1.Get();
        int scl;
        cout << "ENTER SCALE : ";
        cin >> scl;
        scale = scl;
        int sal;
        cout << "ENTER SALARY : ";
        cin >> sal;
        salary = sal;
        cin.ignore();
    }
    void show_Info()
    {
        p1.Show();
        cout << "SCALE = " << scale << endl;
        cout << "SALARY = " << salary << endl;
    }
};
int main()
{
    Employee e1, e2;
    e1.get_Info();
    e1.show_Info();
    e2.get_Info();
    e2.show_Info();
}