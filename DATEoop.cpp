#include<iostream>
using namespace std;
class date{
    private:
    int day;
    string month;
    int year;
    public:
    void setDate(){
        cout<<"ENTER DAY =";
        cin>>day;
        cout<<"ENTER MONTH name =";
        cin>>month;
        cout<<"ENTER YEAR =";
        cin>>year;
    }
    void showDate(){
        cout<<day<<"/"<<month<<"/";
        cout<<year;
    }
};
int main(){
    date dmy;
    dmy.setDate();
    dmy.showDate();
return 0;
}