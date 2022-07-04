#include<iostream>
using namespace std;
float getRupees(float d){
float rs = d*190.2;
return rs;
}
int main(){
float n;
cout<<"Enter dollars : ";
cin>>n;
cout<<"Amount"<<"           "<<"Dollars"<<endl;
for(int i=1;i<=n;i++){
    cout<<"    "<<i<<"     =        "<<getRupees(i)<<endl;
}
}