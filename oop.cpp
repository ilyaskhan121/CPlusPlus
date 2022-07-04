#include <iostream>
using namespace std;
class Circle
{
private:
    double radius;
    double x_cor;
    double y_cor;

public:
    void get_set()
    {
        double r, x, y;
        cout << "enter radius : ";
        cin >> r;
        cout << "enter x cordinate : ";
        cin >> x;
        cout << "enter y cordinate : ";
        cin >> y;
        radius = r;
        x_cor = x;
        y_cor = y;
    }
    void show()
    {
        cout << "Radius = " << radius << endl;
        cout << "X - cordinate = " << x_cor << endl;
        cout << "Y - cordinate = " << y_cor << endl;
    }

    double Area()
    {
        float area;
        float pie = 3.14;
        area = pie * radius * radius;
        return area;
    }
    double Circum()
    {
        float circm;
        float pie = 3.14;
        circm = 2 * pie * radius;
        return circm;
    }
};
int main()
{
    Circle c1;
    c1.get_set();
    c1.show();
    cout<<endl;
    cout << "Area = " << c1.Area() << endl;
    cout << "Circumference =  " << c1.Circum() << endl;
    Circle c2;
    c2.get_set();
    c2.show();
    cout<<endl;
    cout << "Area = " << c2.Area() << endl;
    cout << "Circumference =  " << c2.Circum();
}