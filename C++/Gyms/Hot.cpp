//Problem
// We are in hot weather, and we need to turn on the air conditioner.
//
// but electricity is very expensive so Ali decides to open the air conditioner
// when the degree is at least 30.
//
// Ali needs your help he will tell you the degree d and tell him whether he
// needs to turn on the air conditioner or not.
//
// Input
//
// The only line contains one number d (0 ≤ d ≤ 100) the weathering degree.
//
// Output
//
// print "Yes" if Ali needs to open the air conditioner
//
// otherwise print "No"

//Solution
#include <iostream>
using namespace std;
int main()
{
    short d;
    cin>>d;
    if(d>=30) cout<<"Yes"<<'\n';
    else cout<<"No"<<'\n';
    return 0;
}