

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
        cout<<n<<" IS A PERFECT NUMBER"<<endl;
    }
    else
    {
        cout<<n<<" IS NOT A PERFECT NUMBER"<<endl;
    }  
}
    int main ()
{
    perfectNumbers();
    return 0;
}
