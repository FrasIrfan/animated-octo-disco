    #include <iostream>
    #include <sstream>
    using namespace std;
    void decimalToBinary(){

    //specifically made for the number 58
    //Binary=010110

int n,i,rem,rem2,rem3,rem4,rem5,rem6;
string binary ;
    cout<<"Decimal to Binary Conversion"<<endl;
    cout<<"Enter Number"<<endl;
    cin>>n;
    binary = "";

    for(i=0;i<5;i++)
{
    stringstream ss;
    rem=n%2;
     n=n/2;
     
     cout<<"rem = "<<rem<<endl;
     ss<<rem;
     string s;
     ss>>s;
      binary=binary+(s);
}

//string binary = rem;
     cout<<binary<<endl; 

/*    rem1=n%2;   //0
n=n/2; //29
    rem2=n%2;  //1
n=n/2;    //14
    rem3=n%2;  //0
n=n/2;    //7
    rem4=n%2;  //1
n=n/2;    //3
    rem5=n%2;  //1
n=n/2;    //1
    //rem6=n4%2;  

    cout<<"Binary = "<<rem1<<rem2<<rem3<<rem4<<rem5<<rem6<<endl;
*/
    }
    int main()

{

    decimalToBinary();

    return 0;
}
