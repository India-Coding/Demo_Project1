//Question:-function using array
#include<iostream>
#include <climits>
using namespace std;
int FindMax(int arrsize,int arr[])
{
    int max=INT_MIN;
    for(int i=0;i<arrsize;i++)
    {
           if(arr[i]>max)
           max=arr[i];
    }
    return max;
}
int FindMin(int arrsize,int arr[])
{
    int min=INT_MAX;
    for(int i=0;i<arrsize;i++)
    {
           if(arr[i]<min)
           min=arr[i];
    }
    return min;
}
int main()
{
    int size;
    cout<<"Enter size of array:";
    cin>>size;
    int arr[size];
    int arrsize=sizeof(arr)/sizeof(int);
    cout<<"Enter value of array:";
    for(int i=0;i<arrsize;i++)
    {
           cin>>arr[i];
    }
    cout<<"max value in aarray="<<FindMax(arrsize,arr)<<endl;
    cout<<"min value in aarray="<<FindMin(arrsize,arr)<<endl;
      return 0;
}