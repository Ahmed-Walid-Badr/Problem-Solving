#include <iostream>
using namespace std;
int main()
{
    short a,b;
    cin>>a>>b;
    if(a<=b) cout<<a<<'\n';
    else cout<<a-1<<'\n';
    return 0;
    //Or the one-line cout<<(a>b?a-1:a)<<'\n';
}