#include<iostream>
using namespace std;
int getarraySum(int array[] , int size)
{
   int result=0;
    for(int i=0;i<size;i++)
    {
        
        result=result+array[i];
    }
   return result;
}
int main()
{
    int n;
    cout<<"Enter size of array ";
    cin>>n;
    int a[n];
    cout<<"Enter elments of array ";
    for(int i=0;i<n;i++){
    cin>>a[i];
    }
    cout<<getarraySum(a,n);
return 0;
}
