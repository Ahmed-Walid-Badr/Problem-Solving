//Problem
// Given a name S. Print "Hello, (name)" without parentheses.
//
// Input
// Only one line containing a string S.
//
// Output
// Print "Hello, " without quotes, then print name.
//
// Examples
//
// programmer
// Hello, programmer

//Solution
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    cout<<"Hello, "+s<<'\n'; //or "Hello, "s
    return 0;
}