#include <iostream>
using namespace std;
int main()
{
    short w;
    cin>>w;
    if (w%2==0 && w!=2) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
    return 0;
    // One-line solution ---> cout<<(w%2==0 && w>2 "or use" w!=2? "YES" : "NO";

    // w>2 is more defensive than w!=2, especially if w could equal 0 or be inputted as a negative number

    // but w!=2, given w>0, reads a bit more naturally "Any even positive number but NOT 2"
}