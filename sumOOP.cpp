#include<iostream>
using namespace std;
class Addition
{
private:
   int s;
public:
    int setAdd(int a,int b){
        s=a+b;
    }
    int showAdd(){
        cout<<"sum ="<<s;
    }
};
int main(){
    Addition sum;
    int x,y;
    cout<<"ENTER NUMBER FOR X =";
    cin>>x;
    cout<<"ENTER NUMBER FOR Y =";
    cin>>y;
    sum.setAdd(x, y);
    sum.showAdd();
return 0;
}