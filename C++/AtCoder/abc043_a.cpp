#include<iostream>
using namespace std;
int main()
{
    short n,sum=0;
    cin>>n;
    for (short i=1;i<=n;i++)
    {
        sum+=i;
    }
    cout<<sum<<'\n';
    return 0;
    // since the numbers are consecutive from 1 to n
    // We can also use the formula n(n+1)/2 to sum the numbers
    // reducing the number of variables and time complexity (no loops)
}