#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    short a,b;
    cin>>a>>b;
    for(int i=1;true;i++)
    {
        if ((a*=3)>(b*=2))
        {
            cout<<i<<'\n';
            return 0;
        }
    }
    //Mathematical rules could be use
    //let number of years be x, then a*(3)^x should be greater than b*(2)^x
    //Then (3^x/2^x)>b/a, (3/2)^x > b/a
    //where (3/2)^x is the multiplier of a that should exceed the times b is greater than a
    //Then x*ln(3/2)>ln(b/a), then x>[ln(b/a)/ln(3/2)]----> x=rounded([ln(b/a)/ln(3/2)])+1
}