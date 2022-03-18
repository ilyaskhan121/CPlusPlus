#include<iostream>//passing structure to function
using namespace std;
struct student//structure
{
    char name;
    int age;
};
void displayData(student std1){
    cout<<"name = "<<std1.name<<endl;
    cout<<"age = "<<std1.age;
}
int main(){
    student std1;
    cout<<"enter name : ";
    cin>>std1.name;
    cout<<"enter age : ";
    cin>>std1.age;
    displayData(std1);
   
}