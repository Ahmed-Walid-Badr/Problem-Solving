//Problem
// Given four numbers A,B,C and D. Print the result of the following equation :
//
// X=(A*B)-(C*D).
//
// Input
// Only one line containing 4 separated numbers A,B,C and D (-105 ≤ A,B,C,D ≤ 105).
//
// Output
// Print "Difference = " without quotes followed by the equation result.
//
// Examples
// InputCopy	OutputCopy
// 1 2 3 4
// Difference = -10
// InputCopy	OutputCopy
// 2 3 4 5
// Difference = -14
// 4 5 2 3
// Difference = 14

//Solution
#include<iostream>
using namespace std;
int main()
{
    long long A,B,C,D;
    cin>>A>>B>>C>>D;
    cout<<"Difference = "<<(A*B)-(C*D)<<'\n';
    return 0;
}