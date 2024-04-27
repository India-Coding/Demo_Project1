//Question:-function using array
#include<iostream>
#include <climits>
using namespace std;
int FindMax(int arrsize,int arr[])      //for max value
{
    int max=INT_MIN;
    for(int i=0;i<arrsize;i++)
    {
           if(arr[i]>max)
           max=arr[i];
    }
    return max;
}
int FindMin(int arrsize,int arr[])         //for min value
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
    int arrsize=sizeof(arr)/sizeof(int);        //calculate array size
    cout<<"Enter value of array:";
    for(int i=0;i<arrsize;i++)                     //input taking in array
    {
           cin>>arr[i];
    }
    cout<<"max value in aarray="<<FindMax(arrsize,arr)<<endl;
    cout<<"min value in aarray="<<FindMin(arrsize,arr)<<endl;
      return 0;
}