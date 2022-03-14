#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
bool exist(int array[],int element){
    for(int i=0;i<14;i++){
        if (array[i]==element)
        
          return true; }
        return false;
    }
void randomNumber(int cards[])
{
    srand(time(0));
    for(int i=0;i<14;i++){
    int temp = rand()%14;
    while(exist(cards,temp)){
        temp=rand()%14;
    }
    cards[i]=temp;
} 
}
int main()
{
    int diamond[14];
     int heart[14];
    randomNumber(heart);
    randomNumber(diamond);
    for(int i=0;i<14;i++){
    cout<<"diamond card = "<<diamond[i];
    cout<<endl;
     cout<<"heart card = "<<heart[i];
    cout<<endl;
    }
    
return 0;
}
