#include <iostream>
using namespace std;
int main()
{
    short n, p, q,count=0;
    cin>>n;
    while (n--)
    {
        cin>>p>>q;
        if (q-p>=2) count++;
    }
    cout<<count<<'\n';
}