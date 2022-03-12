    #include <iostream>
    #include <string>
    #include <sstream>
    #include <algorithm>  //used here for using reverse string function.
    using namespace std;
    void decimalToBinary(){

    //specifically made for the number 58
    //Binary=111010

int n,i,rem;
//string binary ;
    cout<<"Decimal to Binary Conversion"<<endl;
    cout<<"Enter Number"<<endl;
    cin>>n; //9
    //binary = ""; //empty value

    for(i=0;i<100;i++)
{
   //stringstream ss;
    rem=n%2; //modulus 9%2=1   //4%2 = 0 //2%2 = 0
     n=n/2; //quotient 9/2=4  //4=2 = 2  //2/2 =1

     
     cout<<"rem = "<<rem<<endl; //rem = 1

     if (n == 1){ //4 false //2 false //1 true
         break;
     } 
     else if (n == 0){ //4 false 2 false
         break; 
     }
    
}
cout <<n<<endl;

    //reverse(binary.begin(),binary.end()); //reverse of a string
    //cout<<binary<<endl; 


    }
    int main()

{

    decimalToBinary();

    return 0;
}
