// Alice and Bob are playing a game and each one of them has a score.
//
// Alice got a score n and Bob got a score m, the one who has a maximum score will win
//
// find who will win this game
//
// Input
// you are giving two number
// 1≤n,m≤1012
// n is the Alice score
// m is the Bob score
//
// Output
// print "Alice win" (without quotes) if he got the maximum score
//
// print "Bob win" (without quotes) if he got the maximum score
//
// if Alice and Bob got the same score print "Draw" (without quotes)

//Solution
#include<iostream>
using namespace std;
int main()
{
    long long n,m;
    cin>>n>>m;
    if (n>m) cout<<"Alice win"<<'\n';
    else if (n<m) cout<<"Bob win"<<'\n';
    else cout<<"Draw"<<'\n';
    return 0;
    // or use cout<<(n>m?"Alice win":(m>n?"Bob win":"Draw"))<<'\n'; instead of the if condition
}