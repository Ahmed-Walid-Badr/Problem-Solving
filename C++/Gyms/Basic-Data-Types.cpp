//Problem
// The following lines show some C++ data types, their format specifiers and their most common bit widths:
//
// int : 32 Bit integer.
// long long : 64 bit integer
// Char : 8 bit Characters & symbols
// Float : 32 bit real value
// Double : 64 bit real value
// Reading
//
// To read a data type, use the following syntax:
//
//    cin >> VariableName;
//
// Plain text
// For example, to read a character followed by a double:
//
//   char ch;
// double d;
// cin >> ch >> d;
//
// Plain text
// Printing
//
// To print a data type, use the following syntax:
//
// cout << VariableName;
//
// Plain text
// For example, to print a character followed by a double:
// char ch = 'd';
// double d = 234.432;
// cout << ch << " "<< d;
//
// Plain text
// Input
// Only one line containing the following space-separated values: int, long long, char, float and double respectively.
//
// Output
// Print each element on a new line in the same order it was received as input.
//
// Don't print any extra spaces.
//
// Examples
//
// 3 12345678912345 a 334.23 14049.30493
// 3
// 12345678912345
// a
// 334.23
// 14049.3

//Solution
#include<iostream>
using namespace std;
int main()
{
    int i; long long l; char c; float f; double d;
    cin>>i>>l>>c>>f>>d;
    cout<<i<<'\n'<<l<<'\n'<<c<<'\n'<<f<<'\n'<<d<<'\n';
    return 0;
}