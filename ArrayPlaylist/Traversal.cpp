#include<iostream>
using namespace std;
void array(int arr[],int size)
{
    cout<<"Traverse Array:\n";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
int arr[]={1,2,3,4,5,6};
int size=sizeof(arr)/sizeof(int);
array(arr,size);
return 0;
}