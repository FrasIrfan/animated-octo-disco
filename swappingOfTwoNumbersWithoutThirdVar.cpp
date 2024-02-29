#include<iostream>
using namespace std;
void swapNumbers()
{
    int a,b;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    cout<<"Before swap a= "<<a<<" b= "<<b<<endl;
    a=a+b; //12 16
    b=a-b;
    a=a-b;
    cout<<"After swap a= "<<a<<" b= "<<b<<endl;
}

int main()
{
    swapNumbers();
    return 0;   
}