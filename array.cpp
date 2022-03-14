#include<iostream>
using namespace std;
int main()
{
    int numbers[9];
     numbers[0]=1;
     numbers[1]=2;
     numbers[2]=4;
     numbers[3]=5;
     numbers[4]=6;
     numbers[5]=7;
     numbers[6]=8;
     numbers[7]=9;
     numbers[8]=3;
    for(int i=0;i<9;i++)
    {
       numbers[i] =  numbers[i]*4;
        cout<<"value in numbers["<<i<<"]="<<numbers[i]<<endl;
    }
return 0;
}