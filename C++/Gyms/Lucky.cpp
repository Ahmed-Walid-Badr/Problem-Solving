//Problem
// Ahmed like numbers and he found that numbers can be lucky.
//
// Ahmed said The numbers can be lucky if the last two digits are divisible by 4 or divisible by 7
//
// Input
//
// The only line contains one number n (10 ≤ n ≤ 108)
//
// Output
//
// Print "Lucky" (without quotes) if the number is lucky
//
// Print "Not Lucky"(without quotes) if the number not lucky

//Solution
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    n%=100;
    cout<<(n%4==0||n%7==0?"Lucky":"Not Lucky")<<'\n';
    return 0;
}