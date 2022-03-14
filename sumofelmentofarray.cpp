#include<iostream>
using namespace std;
int main()
{
    int size=5;int sum;
    int array[size];
    for(int i=0;i<size;i++){
        cout<<"enter number for array = ";
       cin>>array[i];
    }
    sum = array[0]+array[1]+array[2]+array[3]+array[4];
   cout<<"sum is =  "<<sum;
    return 0;
}