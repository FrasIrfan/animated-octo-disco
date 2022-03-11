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
int main()  
{  

armStrongNumber();
return 0;
}