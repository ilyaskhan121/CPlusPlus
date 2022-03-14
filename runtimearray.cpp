#include<iostream>
using namespace std;
int main()
{
    int num[5];
   cout<<"enter value for array (5): ";
    for(int i=0;i<5;i++)
    {
       cin>>num[i];
    }
    cout<<"{";
    for(int i=0;i<5;i++)
    {
        cout<<num[i]<<",";
    }
    cout<<"}";
return 0;
}