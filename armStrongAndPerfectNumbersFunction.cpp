#include <iostream>
using namespace std;

void armStrongNumber(){
int n,remainder,sum=0,temp;
    cout<<"Enter number"<<endl;
    cin>>n;
    temp=n;
while(n>0)
{
    remainder=n%10;
    sum=sum+(remainder*remainder*remainder);
    n=n/10;
}
if(temp==sum)
{
    cout<<temp<<" is a Armstrong Number"<<endl;
}
else
{
    cout<<temp<<" is not an Armstrong Number"<<endl;
}
}

void perfectNumbers(){
    int n,sum=0,i;
    cout<<"Enter number"<<endl;
    cin>>n;

    for(i=1;i<n;i++)
    {
        if(n%i == 0)
        {
            sum=sum+i;
        }
    }
    if(n==sum)
    {
        cout<<n<<" is a Perfect Number"<<endl;
    }
    else
    {
        cout<<n<<" is not a Perfect Number"<<endl;
    }
}
int main()
{
    int x;
    cout<<"Enter 1 to calculate perfectNumbers\nEnter 2 to calculate Armstrong numbers"<<endl;
    cin>>x;

    switch (x){
    case 1:
    perfectNumbers ();
    break;
    case 2:
    armStrongNumber ();
    break;
    default:
    cout<<"You entered wrong input"<<endl;
    }
return 0;
}
