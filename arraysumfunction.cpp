#include <iostream>
using namespace std;
int getarraySum(int array[], int size)
{
    int result = 0;
    for (int i = 0; i < size; i++)
    {

        result = result + array[i];
    }
    return result;
}
int main()
{
    int size;
    cout << "Enter size of array ";
    cin >> size;
    int array[size];
    cout << "Enter elments of array ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout << getarraySum(array, size);
    return 0;
}
