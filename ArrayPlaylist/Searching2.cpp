#include <iostream>
using namespace std;
void linearSearch(int arr[],int n,int loc,int k,int item)
{
      while (loc==0 && k<=n)
    {
        if(item==arr[k])
        {
            loc=k;
        }
        k=k+1;
    }
    if(loc==0)
    {
        cout<<"Your element is not match in array list...!!!";
    }
    else{
        cout<<k<<" Index at "<<arr[loc]<<" Element is found...!! ";
    }
}
int main() {
    int arr[]={2,10,5,6,7,90};
    int n=sizeof(arr)/sizeof(int);
    int loc=0;
    int k=1;
    int item;
    cout<<"Choose element you want to search :\n";
    cin>>item;
    linearSearch(arr,n,loc,k,item);
    return 0;
}