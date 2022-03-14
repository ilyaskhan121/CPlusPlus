#include<iostream>
using namespace std;
class math
{
private:
    int c;
public:
    math(int a,int b)//constructor
    {
        c=a+b; 
        cout<<"sum is = "<<c; 
    }
   

};
int main(){
    math x(3,5);//by creating object ,member function will executed automatically: 
   
}