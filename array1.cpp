#include<iostream>
using namespace std;
int getSquare(int[]);
int main(){
    int a[]={2,3,4,5,6};
    getSquare(a);
    
    
}
int getSquare(int array[]){
     for (int i = 0; i <5; i++)
    {
        array[i]=array[i]*array[i];
        cout<<array[i]<<endl;
    }
     for (int i = 0; i <5; i++)
     return array[i];
}