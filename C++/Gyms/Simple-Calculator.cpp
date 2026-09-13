//Problem
// Given two numbers X and Y. Print the summation and multiplication and subtraction of these 2 numbers.
//
// Input
// Only one line containing two separated numbers X, Y (1  ≤  X, Y  ≤  105).
//
// Output
// Print 3 lines that contain the following in the same order:
//
// "X + Y = summation result" without quotes.
// "X * Y = multiplication result" without quotes.
// "X - Y = subtraction result" without quotes.
// Examples
//
// 5 10
// 5 + 10 = 15
// 5 * 10 = 50
// 5 - 10 = -5
// Note
// Be careful with spaces.

//Solution
#include<iostream>
using namespace std;
int main()
{
    int X,Y;
    cin>>X>>Y;
    cout<<X<<" + "<<Y<<" = "<<X+Y<<'\n'
    <<X<<" * "<<Y<<" = "<<1LL*X*Y<<'\n'//1LL is multiplied to generalize the multiplication result to long long (64-bit space) as X*Y could exceed ~ 2*10^9 and overflow
    <<X << " - "<<Y<<" = "<<X-Y<<'\n';
    return 0;
}