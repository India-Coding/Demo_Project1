#include<iostream>
using namespace std;
int find(int arr[],int size,int element) //function definition
{
    for(int i=0;i<size;i++)
    {
        if(element==arr[i])
        {
            return i; //return index value
        }
    }
    return -1;      //not return any value
}
int main() {
  int arr[]={1,2,3,4,5,6,7,8};
  int size=sizeof(arr)/sizeof(int);  //calculate array size
  int element;
  cout<<"Enter element which want to find :";
  cin>>element;
 int ans= find(arr,size,element);    //called by function
  if(ans!=-1)
  {
      cout<<element<<" Element found at index "<<find(arr,size,element);
  }
  else{
     cout<<"Element does not found";
  }
    return 0;
}