//Problem
// You are giving Two number n, m you need to find if n is divisible by m or not
//
// Input
//
// You are giving two integers n, m (1 ≤ n, m ≤ 105)
//
// Output
//
// print "YES" if n is divisible by m
//
// otherwise print "NO"

//Solution
#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<(n%m?"NO":"YES")<<'\n';
    return 0;
    // The n is divisible by m then n%m returns 0 which evaluates to false giving YES
    // else it returns a number from 1 to n-1 which evaluates to true printing NO
}