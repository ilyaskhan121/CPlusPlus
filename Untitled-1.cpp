#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
bool exists(int array[], int element){
    for(int i=0;i<14;i++){
        if(array[i]==element)
            return true;
    }
    return false;
}
int main()
{
    int diamond[14]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    for(int i=0;i<14;i++){
        int temp=rand()%14;
        while(exists(diamond, temp)){
            temp = rand()%14;
        }
        diamond[i]=temp;
    }
    for(int i=0;i<14;i++){
        cout<<"diamond card="<<diamond[i];
        cout<<endl;
    }   
return 0;
}
