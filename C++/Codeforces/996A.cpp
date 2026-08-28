#include<iostream>
using namespace std;
int main()
{
    int n,coins=0;
    cin>>n;
    coins+=n/100,n%=100;
    coins+=n/20,n%=20;
    coins+=n/10,n%=10;
    coins+=n/5;
    coins+=n%5;
    cout<<coins<<'\n';
    return 0;
    //or a one-line -though less readable- cout << (n/100) + (n%=100)/20 + (n%=20)/10 + (n%=10)/5 + n%5<<'\n';
}