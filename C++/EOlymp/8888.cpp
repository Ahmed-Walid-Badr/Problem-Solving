#include<iostream>
using namespace std;
int main()
{
    long long N;
    cin>>N;
    cout<<N+1+(N%2==0)<<'\n'; //We can write 1+!N%2 as anything%2 gives 0 if divisible and 1 if not
    // but it would be less readable
    return 0;
}