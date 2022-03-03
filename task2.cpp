#include <iostream>
using namespace std;
int main()
{
int n,i,x;
cout<<"Enter number you want to print table"<<endl;
cin>>n;
cout<<"Press 1 to print table upto 10\nPress 2 to print table upto 20" <<endl;
cin>>x;

switch (x) {

case 1:
for(i=1;i<=10;i++)
cout<<n<<"*"<<i<<"="<<n * i<<endl;
break;

case 2:
for(i=1;i<=20;i++)
cout<<n<<"*"<<i<<"="<<n * i<<endl;
break;

default:
cout<<"Wrong Input";

}


return 0;
}
