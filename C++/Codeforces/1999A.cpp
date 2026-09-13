
#include<iostream>
using namespace std;
int main()
{
    short t;
    cin>>t;
    while (t--)
    {
        char A,B;
        cin>>A>>B;
        cout<<(A-'0')+(B-'0')<<'\n'; // or A+B-(2*'0')
    }
    return 0;
}