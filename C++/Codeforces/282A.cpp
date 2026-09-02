#include<iostream>
using namespace std;
int main()
{
    short n,x=0;
    cin>>n;
    while(n--)
    {
        char c1, c2, c3;
        cin>>c1>>c2>>c3;
        if (c2=='+') x++;
        else x--;
    }
    cout<<x<<'\n';
    return 0;
    //We can also use only two inputs
    //(c1) as a buffer for what maybe first either x or sign
    //(c2) for the sign
}