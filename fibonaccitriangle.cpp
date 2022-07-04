#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter the limit: ";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    int a = 0;
    int b = 1;
    cout << b << "\t";
    for (int j = 0; j < i; j++)
    {
      int c = a + b;
      cout << c << "\t";
      a = b;
      b = c;
    }
    cout << "\n";
  }
  return 0;
}