#include<iostream>
int g=56;
int function(int );
using namespace std;
int main()
{
    int a;
    cout<<"globel variable = "<<g<<endl;
    function(a);
    return 0;
}
int function(int variable){
    cout<<"g in sub funtion = "<<g;
}