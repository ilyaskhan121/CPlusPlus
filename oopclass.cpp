#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int width;

public:
    void get_set()
    {
        int l, w;
        cout << "enter length : ";
        cin >> l;
        cout << "enter width : ";
        cin >> w;
        length = l;
        width = w;
    }
    void show()
    {
        cout << "Lenght = " << length << endl;
        cout << "Width = " << width << endl;
    }
    int Area()
    {
        int area;
        area = length * width;
        return area;
    }
    int parameter()
    {
        int para;
        para = 2 * (length + width);
        return para;
    }
    void getSketch()
    {
        char symbol;
        cout << "enter symbol : ";
        cin >> symbol;
        for (int w = 1; w <= width; w++)
        {
            for (int l = 1; l <= length; l++)
            {
                if (w == 1 || w == width || l == 1 || l == length)
                {
                    cout << symbol;
                }
                else
                    cout << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    Rectangle r1;
    r1.get_set();
    r1.show();
    cout << "Area = " << r1.Area() << endl;
    cout << "Parameters = " << r1.parameter() << endl;
    r1.getSketch();
    Rectangle r2;
     r2.get_set();
    r2.show();
    cout << "Area = " << r2.Area() << endl;
    cout << "Parameters = " << r2.parameter() << endl;
    r2.getSketch();
    
}