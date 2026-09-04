#include<iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    if (n%2) cout<<((n/2)*1)-n<<'\n'; // n%2 gives either 0 (if even) or 1 (if odd) which evaluate false & true
    else cout<<(n/2)*1<<'\n';
    return 0;
    // Since the series is alternating & starting with -1 and the magnitude is increasing by 1
    // the sum of every two numbers is 1: (-1+2)+(-3+4)+.... then if n is even we have n/2 pairs where each pair gives 1
    // and if n is odd then we have (n-1)/2 (which is equivalent to n/2 if n & 2 are int) pairs with giving 1 but plus -n
}