#include<iostream>
using namespace std;
int main(){
    int size;
    int array[size];
    cout<<"enter size of array : ";
    cin>>size;
    int result=0;
    cout<<"enter element for array : ";
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    for(int i=0;i<size;i++){
        result=result+array[i];
    }
    cout<<"sum : "<<result;
}