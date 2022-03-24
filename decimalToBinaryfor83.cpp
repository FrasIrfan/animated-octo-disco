    #include <iostream>
    using namespace std;
    void decimalToBinary(){

    //specifically made for the number 83

int n,n1,n2,n3,n4,n5,rem1,rem2,rem3,rem4,rem5,rem6;
    cout<<"Decimal to Binary Conversion"<<endl;
    cout<<"Enter Number"<<endl;
    cin>>n;

        rem1=n%2;   //1
    n1=n/2; //41
        rem2=n1%2;  //1
    n2=n1/2;    //20
        rem3=n2%2;  //0
    n3=n2/2;    //10
        rem4=n3%2;  //0
    n4=n3/2;    //5
        rem5=n4%2;  //1
    n5=n4/2;    //2
        rem6=n4%2;  //1

        cout<<"Binary = "<<rem1<<rem2<<rem3<<rem4<<rem5<<rem6<<endl;

    }
    int main()

    {   

    decimalToBinary();
    return 0;
    
    }
