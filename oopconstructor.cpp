#include<iostream>
using namespace std;
class math
{
private:
    int a,b,c;
public:
    math(int a,int b)//parameterized constructor
    {
        this->a=a;
        this->b=b;
        c=a+b;
         
    }
    int getSum(){
        cout<<"SUM IS ="<<c<<endl;
    }
   math()//default constructor: no need of arguments
   {
       cout<<"welcome      "<<endl;
   }
};
class shape
{ 
private:
    int A;
public:
    shape(int l,int w)
    {
        A=w*l;
        cout<<"AREA OF RECTANGLE : "<<A;
    }


};
int main(){
    math object_1(8,9);//by creating object ,member function will executed automatically: 
    object_1.getSum();
    math object_2;
    shape rectangle(9,5); 
}