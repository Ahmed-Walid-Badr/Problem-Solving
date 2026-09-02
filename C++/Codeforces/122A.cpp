#include<iostream>
using namespace std;
bool ans_found = false;

void solve(short num, short divisor)
{
    if (ans_found || divisor > num) return;
    if (num % divisor == 0)
    {
        ans_found = true;
        cout << "YES" << '\n';
        return;
    }
    solve(num, (divisor*10)+4); // Add a new 4 digit
    solve(num, (divisor*10)+7); // Add a new 7 digit
}

int main()
{
    short num;
    cin>>num;
    solve(num,4);
    solve(num,7);
    if (!ans_found) cout << "NO" << '\n';
    return 0;
}
// Recursion could be used for much larger limits as 10^6 with int
// But here we can use a precomputed array of 14 elements for 1<=n<=1000
// Or a for loop with all 14 conditions of numbers divisible by a lucky number from 1 to 1000