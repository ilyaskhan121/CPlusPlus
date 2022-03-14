#include<iostream>
void function();
using namespace std;
int main()
{
    for(int i=1;i<=5;i++)
    function();
}
void function(){
    static int a=1;
    a++;
    cout<<" sub : "<<a<<endl;
}