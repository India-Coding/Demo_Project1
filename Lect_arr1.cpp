#include<iostream>
using namespace std;
int main()
{
    int array[5]={2,4,6,8,10};  //decleartion and initilization of array
    for(int i=1;i<5;i++)
    {
        cout<<array[i]<<endl;
    }
    cout<<sizeof(array);        //calculate sizeof of array
    return 0;
}