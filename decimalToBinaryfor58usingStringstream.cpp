    #include <iostream>
    #include <string>
    #include <sstream>
    #include <algorithm>  //used here for using reverse string function.
    using namespace std;
    void decimalToBinary(){

    //specifically made for the number 58
    //Binary=010110
    //111010

int n,i,rem;
string binary ;
    cout<<"Decimal to Binary Conversion"<<endl;
    cout<<"Enter Number"<<endl;
    cin>>n;
    binary = ""; //empty value

    for(i=0;i<6;i++)
{
    stringstream ss;
    rem=n%2; //modulus
     n=n/2; //quotient
     
     //cout<<"rem = "<<rem<<endl;
     ss<<rem;
     string s;
     ss>>s; //syntax of stringstream
     //string s;
     ss>>s; //syntax of stringstream
      binary=binary+(s); //concatination
}

    reverse(binary.begin(),binary.end()); //reverse of a string
    cout<<binary<<endl; 


    }
    int main()

{

    decimalToBinary();

    return 0;
}
