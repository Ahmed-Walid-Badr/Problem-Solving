#include<iostream>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    long long odd_count=n/2; //The count of odd numbers which is also the middle or middle + 0.5 index for the nums

    if(n%2!=0) odd_count++; // The numbers are more than the half by 1

    //Sequence rules can be used
    if (odd_count>=k) cout<<(2*k)-1<<'\n'; // Tn=2n-1 for odd nums
    else cout<<2*(k-odd_count) <<'\n'; // We subtract the count of odd numbers from the index k to get the even numbers index, then Tn=2n
    return 0;
}