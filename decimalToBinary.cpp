    #include <iostream>
    using namespace std;
    void decimalToBinary(){

    //specifically made for the number 65

int n,n1,n2,n3,n4,n5,n6,rem1,rem2,rem3,rem4,rem5,rem6;
    cout<<"Decimal to Binary Conversion"<<endl;
    cout<<"Enter Number"<<endl;
    cin>>n;

    rem1=n%2; //1
n1=n/2;   //32
    rem2=n1%2;   //0
n2=n1/2;  //16
    rem3=n2%2;  //0 
n3=n2/2;   //8
    rem4=n3%2; //0
n4=n3/2;  //4
    rem4=n4%2;  //0
n5=n4/2;  //2
    rem5=n5%2;  //0
n6=n5/2;  //0
    rem6=n5%2;

    cout<<"Binary = "<<rem1<<rem2<<rem3<<rem4<<rem5<<n6<<endl;

    }
    int main()

{

    decimalToBinary();

    return 0;
}
