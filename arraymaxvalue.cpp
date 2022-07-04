#include<iostream>
using namespace std;
int showMax(int array[],int size){
 int max=0;
     for(int i=0;i<size;i++){
         if(max<array[i]){
             max=array[i];
         }
    }
    return max;
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
   
    cout<<"Maximum number is : "<<showMax(array,size);
}
