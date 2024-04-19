#include<iostream>
using namespace std;
void display(int n1,int n2,int n3)
{
    int add=n1+n2+n3;
    cout<<"Sum of three number"<<add;
} 
int main(){
    int a,b,c;
    cout<<"Enter any three number"<<endl;
    cin>>a>>b>>c;
    display(a,b,c);
    return 0;
}