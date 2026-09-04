#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    short A1,A2,A3,A4;
    cin>>A1>>A2>>A3>>A4;
    cout<<min({A1,A2,A3,A4})<<'\n'; // We are trying to find the limiting number which is the minimum number
    return 0;
    // or use if conditions:
    // if (A1>=A2 && A1>=A3 && A1>=A4) cout<<A1;
    // if (A2........................) cout<<A2;
    // if (A3........................) cout<<A3;
    // if (A4........................) cout<<A4;

    // or separate the conditions ANDED into nested condtions:
    // if (A1>A2)
    // {
    //     if (A1>A3)
    //     {
    //         if (A1>A4) cout <<A1;
    //         else cout <<A4;
    //     }
    //     else if (A3>A4) cout <<A3;
    //     else cout <<A4;
    //
    //
    // }
    // else if (A2>A3)
    // {
    //     if (A2>A4) cout <<A2;
    //     else cout <<A4;
    // }
    // else if (A3>A4) cout <<A3;
    // else cout <<A4;
}