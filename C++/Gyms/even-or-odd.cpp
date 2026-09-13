//Problem
// You are giving the number n and you need to find whether the number is
// even or odd
//
// Input
//
// The only line contains n (1 < n ≤ 1012)
//
// Output
//
// print even if the number is even
//
// print odd if the number is odd

//Solution
#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    cout<<(n%2?"odd":"even")<<'\n';
    return 0;
}