#include<iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    cout<<(n%2?"Valid":"Not valid")<<'\n';//if the last digit is odd then n is odd and vice versa
    // The last digit is odd if and only if n is an odd number
    return 0;
}