#include<iostream>
using namespace std;
class students
{
private:
    int age;
    string name;
public:
    char setName(string noun){
        name = noun; 
    }
   char showName(){
       cout<<"NAME = "<<name<<endl;
   }
   int setAge(int years){
       age =  years;
   }
   int showAge(){
       cout<<"AGE = "<<age;
   }
};
int main(){
    students std1;
    std1.setName("ilyas khan");
    std1.showName();
    std1.setAge(19);
    std1.showAge();
    return 0;
}