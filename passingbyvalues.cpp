#include<iostream>
void function( int );
using namespace std;
int main(){
    int a=30;
    cout<<" value of a before calling function = "<<a<<endl;
    function(a);
    cout<<" value  of a after calling a function = "<<a<<endl;
    return 0;
}
void function(int variable){
    variable =23;
    cout<<" value of variable = "<<variable<<endl;
}
