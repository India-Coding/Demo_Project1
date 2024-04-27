//Question:-function using array
#include<iostream>
using namespace std;
void print(int size,int arr[])     //function definition
{
         for(int i=0;i<size;i++)
         {
            cout<<arr[i]<<endl;    //display data using cout object through
         }
}
int main()
{
int size=3,arr[3]={1,2,3};
print(size,arr);            //calling by function
    
int num[3]={12,13,14};
print(size,num);            //calling by function
   return 0;
}