#include<iostream>

using namespace std;
void function(int,int);
int main(){
   int a=36;
   int b=78;
   function(a,b);
}
void function(int variable,int element){

   int s= variable + element;
   cout<<s;
}