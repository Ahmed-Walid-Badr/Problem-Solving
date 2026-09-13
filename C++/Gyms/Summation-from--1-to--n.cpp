// Given a number
// N
// N. Print the summation of the numbers that is between 1 and
// N
// N (inclusive).
// Input
// Only one line containing a number
// N
// N
// (
// 1
// ≤
// N
// ≤
// 10
// 9
// )
// (1≤N≤10
// 9
//  )
//
// Output
// Print the summation of the numbers that are between 1 and
// N
// N (inclusive).
//
// Examples
//
// 3
// 6
// --------
// 10
// 55

//Solution
#include<iostream>
using namespace std;
int main()
{
    long long n; //long long because n*(n+1) can reach 10^18 +10^9, so if int this will overflow as the result only reserved 32-bits
    //or if int use multiply 1LL but make sure it is executed before any other operation with overflow risk happens
    cin>>n;
    cout<<n*(n+1)/2;//anyway the n*(n+1) is executed first so no fear that (n+1)/2 get truncated
}