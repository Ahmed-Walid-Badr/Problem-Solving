#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if (c) cout<<(a>=b?"Takahashi\n":"Aoki\n"); //if c==1 it evaluates to true meaning Aoki starts, if 0 then it evaluates to false
    else cout<<(a<=b?"Aoki\n":"Takahashi\n");
    return 0;
}