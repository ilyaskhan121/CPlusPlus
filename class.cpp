#include <iostream>
using namespace std;
class Students
{
private:
    char *name;
    int rollno;
    float cgpa;
    char *address;
    public:
    Students(char *nm,int r,float gp,char *a)  :  name(nm) ,rollno(r),cgpa(gp),address(a)
    {
    }
    void show() 
    {
        cout << "Name = " << name<<"\n";
        cout << "ROll no = " << rollno<<"\n";
        cout << "cGPA = " << cgpa<<"\n";
        cout << "Address = " << address;
    }
};
int main()
{
    Students s1("ILyas khan",14,3.9,"Tehkal Payan peshawar");
    s1.show();
    
}