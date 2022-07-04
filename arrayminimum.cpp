#include<iostream>
using namespace std;
int showSmall(int array[],int size){
 int small=array[0];
     for(int i=0;i<size;i++){
         if(small>array[i]){
             small=array[i];
         }
    }
    return small;
}
int main(){
    int size;
    cout<<"Enter size for array : ";
    cin>>size;
    int array[size];
    cout<<"Enter element of array : ";
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
   
    cout<<"Smallest number is : "<<showSmall(array,size);
}
