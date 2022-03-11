#include<iostream>
using namespace std;

int main()
{
	int n, max=999999, min;-9999999
	char choice;

	do
	{	cout<<"Enter number : ";
		cin>>n;

		if(n>max)
			max=n;
		if(n<min)
			min=n;

		cout<<"Do you want to Continue(y/n)? ";
		cin>>choice;

	}while(choice=='y' || choice=='Y');


	cout<<"Maximum Number :"<<max<<"\nMinimum Number :"<<min;


	return 0;
}