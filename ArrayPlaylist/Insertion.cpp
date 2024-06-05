#include<iostream>
using namespace std;
int Insert(int arr[],int size)  //function definition
{
    cout<<"Displaying Insertion element :";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"\n";
    }
}
int main() {
  int arr[]={1,2,3,4,5,6,7,8,9,12,25},item,i;
  int loc;
   int size=sizeof(arr)/sizeof(int);      //calculate array size
   i=size;
   cout<<"enter location";
   cin>>loc;
  cout<<"Insert an element :";
  cin>>item;
  while (i>=loc)
  {
    arr[i+1]=arr[i];
    i=i-1;
  }
  arr[loc]=item;
  size=size+1;
  Insert(arr,size);
return 0;
}