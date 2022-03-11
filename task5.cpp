#include <iostream>
using namespace std;
int main()
{
int n,i;
int sum = 0;
 i=1;
 while (i<=5)
 {
cout<<"\nEnter number"<<endl;
cin>>n;
if (n<0) {
 break;
}

else {
sum=sum+n;
i++;
}
cout<<"\n Sum is = "<<sum<<endl;
}
return 0;
}

 
