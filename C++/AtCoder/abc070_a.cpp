#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    if (n/100==n%10) cout<<"Yes"<<'\n';
    else cout<<"No"<<'\n';
    return 0;
    //or use 3 chars and and compare char1 with char3
    //For variable size we can use strings and reverse(s.begin(),s.end())
}