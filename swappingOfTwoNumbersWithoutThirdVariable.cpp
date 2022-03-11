     #include <iostream>
    using namespace std;
    void swappNumbers ()
    {
        int a, b;
        cout<<"Enter first number"<<endl;
        cin>>a;
        cout<<"Enter second number"<<endl;
        cin>>b;
        cout<<"Before swap a= "<<a<<" b= "<<b<<endl;
        a=a*b; //12 16
        b=a/b;  
        a=a/b;  
        cout<<"After swap a= "<<a<<" b= "<<b<<endl;
    }

    int main()
    {
    swappNumbers();
    return 0;
    }
