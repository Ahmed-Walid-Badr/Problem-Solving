#include<iostream>
using namespace std;
int main()
{
    short A,B;
    cin>>A>>B;
    if (A+B>A*B) cout<<(A+B>A-B?A+B:A-B)<<'\n';
    else cout<<(A*B>A-B?A*B:A-B)<<'\n';
    return 0;
    // One-line alternative ---> cout<<max({A+B,A*B,A-B})<<'\n'; but include algorithm first
}