#include<iostream>
using namespace std;
struct parameters
{
    int inch;
    int feet;
};
int main(){
    parameters *ptr,p;
    ptr=&p;
    cout << "Enter inch: ";
    cin >> (*ptr).inch;
    cout << "Enter feet: ";
    cin >> (*ptr).feet;
    cout<<"inch = "<<(*ptr).inch<<" "<<"inches"<<endl;
    cout<<"feet = "<<(*ptr).feet<<" "<<"feet";
}