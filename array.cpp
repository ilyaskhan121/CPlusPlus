#include<iostream>
using namespace std;
int main()
{   
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    int numbers[size];
    cout<<"Enter values for array : ";
    for(int i=0;i<size;i++){
        cin>>numbers[i];
    }
    for(int i=0;i<size;i++){
       numbers[i] =  numbers[i]*4;
        cout<<"value in numbers["<<i<<"]="<<numbers[i]<<endl;
    }
return 0;
}