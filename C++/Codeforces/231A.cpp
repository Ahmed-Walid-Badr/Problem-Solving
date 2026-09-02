#include<iostream>
using namespace std;
int main()
{
    short n,problems=0;
    cin>>n;
    while (n--)
    {
        short x,y,z;
        cin>>x>>y>>z;
        if (x+y+z>=2) problems++;
    }
    cout<<problems<<'\n';
}