#include<iostream>
using namespace std;
int Delete(int arr[],int size)  //function definition
{
    cout<<"Displaying element :\n";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"\n";
    }
    return 0;
}
int main() {
  int arr[]={1,2,3,4,5,6,7,8,9,12,25},item,i;
  int loc;
   int size=sizeof(arr)/sizeof(int);      //calculate array size
   i=size;
   cout<<"Choose location from you want to delete element :";
   cin>>loc;
  cout<<"delete an element :\n";
  cin>>item;
if(item==arr[loc])
{
  while (loc<size-1)
  {
    arr[loc]=arr[loc+1];
    loc++;
  }
}
else{
    cout<<"invalid input\n";
}
  size=size-1;
 Delete(arr,size);
return 0;
}