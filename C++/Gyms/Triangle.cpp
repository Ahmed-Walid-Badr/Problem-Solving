//Problem
// Given
// A,B,C as the sides of a triangle, find whether the triangle is scalene.
//
// Note:
//
// A triangle is said to be scalene if all three sides of the triangle are distinct.
// Input
// The only line contains tree numbers (
//
// 1≤A,B,C≤108
//  ) the sides of a triangle
//
// Output
// print "YES" if the triangle is scalene.
//
// otherwise, print "NO"
//
// Examples
//
// 5 9 8
// YES
//
// 4 4 4
// NO

//Solution
#include<iostream>
using namespace std;
int main()
{
    int A,B,C;
    cin>>A>>B>>C;
    if (A!=B && A!=C && B!=C) cout<<"YES\n";
    else cout<<"NO\n";
}