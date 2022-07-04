#include <iostream>
#include <cstring>
using namespace std;
class Employee
{
private:
    int id;
    char name[100];
    static int total;

public:
    static int noOFemployee()
    {
        return total;
    }
    Employee()
    {
        total++;
    }
    ~Employee()
    {
        cout << "NAME IS DESTROYED " << endl;
        cout << "ID IS DESTROYED " << endl;
    }
    void get()
    {
        char nm[100];
        cout << "Enter NAME :  "<<endl;
        cin.getline(nm, sizeof(nm));
        strcpy(name, nm);
        int id;
        cout << "Enter ID : "<<endl;
        cin >> id;
        this->id = id;
        cin.ignore();
    }
    void show()
    {
        cout << "NAME = " << name << endl;
        cout << "ID = " << id << endl;
    }
};
int Employee::total = 0;
int main()
{
    Employee e1;
    e1.get();
    e1.show();
    Employee e2;
    e2.get();
    e2.show();
    cout << "NUMBER OF EMPLOYEES = " << Employee::noOFemployee() << endl;
}