// Ali and Asem love numbers and they will play a game with their teacher.
//
// The Teacher gave them the number n
// and Ali said
// This number is even and divisible by 4
// Asem said
// This number is odd and divisible by 5
// if Ali is right then Ali wins the game and if Asem is right Asem wins the game if both are wrong then no one wins.
//
// Input
// The only line contain one number n
// 1≤n≤1018
//
// Output
// Print "Ali wins" if Ali is right. or print "Asem wins" if Asem is right.
//
// otherwise, print "No one wins".
//
// Examples
//
// 24
// Ali wins
//
// 55
// Asem wins
//
// 22
// No one wins

//Solution
#include<iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    cout<<(n%4==0?"Ali wins":(n%5==0 && n%2?"Asem wins":"No one wins"))<<'\n'; // n%2 returns 1 if odd (not divisible by 2)
    //The number won't be divisible by 4 unless it is even so we don't need to check if it is even
    return 0;
    //or use if conditions for a more readable solution
}