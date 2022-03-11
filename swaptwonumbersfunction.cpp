#include <iostream>
using namespace std;

void swapTwoNumbers ()
{

    int a,b,temp;

    cout << "Enter two numbers." <<endl;

    cout << "Enter first number." <<endl;
    cin>>a;
    cout << "Enter second number." <<endl;
    cin>>b;

    cout << "Before swapping:" << endl;
    cout << "n1 = " << a << ", n2 = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "\nAfter swapping:" << endl;
    cout << "n1 = " << a << ", n2 = " << b << endl;
}
int main()
{

    swapTwoNumbers();
    return 0;
}
