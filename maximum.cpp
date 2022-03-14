#include<iostream>
int max(int[]);
using namespace std;
int main(){
    int arr[4];
    for(int i=0;i<4;i++){
    cout<<"enter number for array : ";
    cin>>arr[i];}
    max(arr);
}
int max(int array[]){
    int maximum;
    maximum=array[0];
    for (int index  = 0; index < 4; index++)
    {
        if(maximum<array[0])
        maximum=array[index];
    }
    cout<<"maximum = "<<maximum;
}