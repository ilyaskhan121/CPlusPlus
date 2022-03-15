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
        cout<<"sum is = "<<c<<endl; 
    }
   

};
class area
{ 
private:
    int A;
public:
    area(int l,int w)
    {
        A=w*l;
        cout<<"Area of recatangle = "<<A;
    }

};
int main(){
    math x(3,5);//by creating object ,member function will executed automatically: 
    area(6,8);
}