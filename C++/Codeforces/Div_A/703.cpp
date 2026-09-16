#include <iostream>
using namespace std;
int main()
{
    short n,Mishka=0,Chris=0;
    cin>>n;
    while (n--)
    {
        short M,C;
        cin>>M>>C;
        if (M>C) Mishka++;
        else if (M<C) Chris++;
    }
    cout<<(Mishka>Chris?"Mishka":(Chris>Mishka?"Chris":"Friendship is magic!^^"))<<'\n';
    return 0;
}
//Or make one counter for Mishka and add 1 if she won a game and subtract 1 if she lost
//then if that counter is positive then mishka won, if 0 then both won the same number of games, if -ve then Chris won