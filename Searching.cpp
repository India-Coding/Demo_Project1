#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int n,i,num=9;
    for(int i=1;i<=5;i++)
    {
         if (arr[i] == num){
             num==arr[i];}
             else{
                cout<<"not found";
             }
    }
    cout<<num;

    return 0;
    }

// int Searching(int num,int arr[i],int i)
// {
//     for(int i=1;i<=num;i++)
//     {
//         if(num==arr[i])
//         cout<<"element found"<<num=arr[i];
//         else{
//             cout<<"not found";
//         }
//     }
// }
// int main()
// {
//     int arr[5]={1,2,3,4,5};
//     int i;
//     Searching(2,arr[i]);
//     return 0;
// }