#include <iostream>
using namespace std;
class Temperature
{
private:
    double c;
    double f;

public:
    Temperature()
    {
        c = 0;
    }
    void get_C()
    {
        double cen;
        cout << "Enter temperature in centigrade : ";
        cin >> cen;
        
        c = cen;
    }

    void showC()
    {
        cout << "Current temperature in centigrade =  " << c << endl;
    }
    double showC_in_F()
    {
        double result;
        cout << "Current temperature in fahrenheit =  ";
        result = (c * 1.8) + 32;
        return result;
    }
    void get_F()
    {
        double fah;
        cout << "Enter temperature in fahrenheit : ";
        cin >> fah;
        f = fah;
    }
    void showF()
    {
        cout << "Current temperature in fahrenheit =  " << f << endl;
    }
    double showF_in_C()
    {
        double result;
        cout << "Current temperature in centigrade =  ";
        result = (f - 32) * 5.0 / 9.0;
        return result;
    }
};

int main()
{
    Temperature t1;
    t1.get_C();
    t1.showC();
    cout << t1.showC_in_F() << endl;
    t1.get_F();
    t1.showF();
    cout << t1.showF_in_C();
}