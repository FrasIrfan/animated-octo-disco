    #include <iostream>
    using namespace std;
    void decimalToBinary(){

int n,i,rem;

    cout<<"Decimal to Binary Conversion"<<endl;
    cout<<"Enter Number"<<endl;
    cin>>n; 

    for(i=0;i<100;i++)
{
    rem=n%2; //modulus 9%2=1   //4%2 = 0 //2%2 = 0
     n=n/2; //quotient 9/2=4  //4=2 = 2  //2/2 =

     
     cout<<"rem = "<<rem<<endl; //rem = 1

     if (n == 1){ //4 false //2 false //1 true
         break;
     } 
     else if (n == 0){ //4 false 2 false
         break; 
     }
    
}
    cout <<"rem = " << n << endl;
    cout << "Binary = " << n << rem << rem << rem << endl; // here is the problem 

    


    }
    int main()

{

    decimalToBinary();

    return 0;
}
