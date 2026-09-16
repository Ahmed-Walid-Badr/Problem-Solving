#include <iostream>
using namespace std;
int main()
{
    short t;
    cin >> t;
    while (t--)
    {
        long long n,ans_count=0;
        cin >> n;
        long long zeros=100000000000000000; //17 zero as "zeros" can't be 10^18 for n<=10^18
        for (short i = 0 ; i < 17; i++)
        {
            if (n%(1+zeros)==0) ans_count++; // since y = x and k zeros then y = x * 10^k
            zeros/=10;
        }
        cout << ans_count << '\n';
        zeros=100000000000000000;
        for (short i = 0 ; i < 17; i++)
        {
            if (n%(1+zeros)==0) cout << n/(1+zeros) << ' ';
            zeros/=10; // The zeros here is reduced from 1e17 to 1 ( 1e17 to 10 tested)
            // instead of increasing from 10 to 1e17 because the required output is from the smallest x to the greatest x
            // so we use division as the larger valid zeros are being tested first
            // as the smaller numbers need more zeros to reach the same n compared to the greater numbers
        }
        cout <<'\n';

    }
    return 0;
}