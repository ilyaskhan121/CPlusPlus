#include<iostream>
using namespace std;
class sum
{
private:
    int c;
    int s;
public:
    sum(int a,int b){
        c=a+b;
        cout<<"sum of two numbers = "<<c<<endl;
    }
    sum(int x,int y,int z){
        s=x+y+z;
        cout<<"sum of three numbers = "<<s;
    }

};
int main(){
    sum object_1(3,4);
    sum object_2(9,5,5);
}