    #include <iostream>
    using namespace std;
    void decimalToBinary(){

int n,i,rem,binary;
    cout<<"Decimal to Binary Conversion"<<endl;
    cout<<"Enter Number"<<endl;
    cin>>n; //9

do {
    
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
while (i<100);
    //for(i=0;i<100;i++)

    cout<<"rem = "<<n<<endl;
    
    binary = binary + (rem);
  //  cout << binary << endl;
    }
    int main()

{

    decimalToBinary();

    return 0;
}
