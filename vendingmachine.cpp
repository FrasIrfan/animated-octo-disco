#include <iostream>
using namespace std;
int main ()
{
int vendingMachine;
int items;

//do {
selection:
cout<<"Please select from the following items"<<endl;
cout<<"Item 1 : Chips - 50$"<<endl;
cout<<"Item 2 : Biscuits - 20$"<<endl;
cout<<"Item 3 : Coke - 60$"<<endl;
cout<<"Item 4 : Chocolate - 100$"<<endl;
cout<<"Item 5 : Coffee - 70$"<<endl;

cout<<"\nENTER THE ITEM NUMBER YOU WANT TO PURCHASE :"<<endl;
cin>>items;
switch (items)
{
case 1:
cout<<"You added chips to your cart"<<endl;
break;

case 2:
cout<<"You added Biscuits to your cart"<<endl;
break;

case 3:
cout<<"You added Coke to your cart"<<endl;
break;

case 4:
cout<<"You added Chocolate to your cart"<<endl;
break;

case 5:
cout<<"You added Coffee to your cart"<<endl;
break;

default:
cout<<"You entered wrong input"<<endl;
break;


}
int quantity;
int price;
int totalprice;


cout<<"Enter Quantity"<<endl;
cin>>quantity;
if (items==1) {
price=50*quantity;
cout<<"Your total price is "<<price<<"$"<<endl;
}

else if(items==2){
price=20*quantity;
cout<<"Your total price is "<<price<<"$"<<endl;
}

else if(items==3){
price=60*quantity;
cout<<"Your total price is "<<price<<"$"<<endl;
}
else if(items==4){
price=100*quantity;
cout<<"Your total price is "<<price<<"$"<<endl;
}
else if(items==5){
price=70*quantity;
cout<<"Your total price is "<<price<<"$"<<endl;
}
int input;
cout <<"\nDo you want to shop more?\nPress 1 for yes and 0 to dismiss"<<endl;
cin>>input;
if (input==1)
{
goto selection;
}
else if(input==0)
{
cout<<"Thank you for Shopping"<<endl;
//return 0;
}





//while (quantity=10);
return 0;

}

