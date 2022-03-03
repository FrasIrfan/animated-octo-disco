
#include <iostream>
using namespace std;
void  evenOdd (){
int number,remainder;
    cout << "Please Enter your Desired Number:";
    cin >> number;
    remainder  = number % 2;
    if ( remainder == 0)
    {
    cout << number << " is an even number";
    }
    else {
        cout << number << " is an odd number";
    }
}
int main ()
{
evenOdd();
return 0;





}
