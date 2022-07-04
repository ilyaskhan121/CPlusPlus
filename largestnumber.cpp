#include<iostream>
using namespace std;
void show_Largest(int a,int b,int c){
if(a>b){
       if(a>c){
           cout<<"1st is the largest  ";
       }
       else
       cout<<"3rd is the largest  ";
   }
   else{
       if(b>c){
           cout<<"2nd is the largest  ";
       }
       else
       cout<<"3rd is the largest  ";
   }
}
int main()
{
   int x,y,z;
   cout<<"Enter 1st number : ";
   cin>>x;
   cout<<"Enter 2nd number : ";
   cin>>y;
   cout<<"Enter 3rd number : ";
   cin>>z;
   show_Largest(x,y,z);
}