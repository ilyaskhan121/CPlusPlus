#include<iostream>
void function(int*);
using namespace std;
int main()
{
    int a[]={1,2,3,4,5};
    function(a);
    for(int i =0;i<5;i++){
        cout<<"a = "<<a[i]<<endl;
    }

}
void function(int* array){
    for(int i=0;i<5;i++)
    *(array+i)= *(array+i)*4;

}