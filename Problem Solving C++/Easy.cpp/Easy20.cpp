/* C++ Program to find Factors of a Number using For loop  */

#include<iostream>

using namespace std;

int main()
{
    long int n,i;
    cout<<"Enter any number: ";
    cin>>n;
    cout<<endl<<"\nFactors of [ "<<n<<" ] are :: ";

    for(i=1;i<=n;++i)
    {
        if(n%i==0)
            cout<<" "<<i;
    }

    cout<<endl;

    return 0;
}