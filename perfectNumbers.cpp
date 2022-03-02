

    #include <iostream>
    using namespace std;
    void perfectNumbers(){
    int n,sum=0,i;
    cout<<"Enter number"<<endl;
    cin>>n;

    for(i=1;i<n;i++)
    {
        if(n%i == 0)
        {
            sum=sum+i;
        }
    }
    if(n==sum)
    {
        cout<<n<<" is a Perfect Number"<<endl;
    }
    else
    {
        cout<<n<<" is not a Perfect Numeber"<<endl;
    }
    

    
}
    int main ()
{
    perfectNumbers();
    return 0;
}
