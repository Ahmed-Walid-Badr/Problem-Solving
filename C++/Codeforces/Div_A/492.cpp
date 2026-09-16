#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    n--; // The first row need 1 block
    for (short i=1; true ; i++,n-=((i+1)*(i+2))/2) // each row needs blocks from 1 to row's number (i) added so we use (i(i+1))/2
       //but it is i+1 not i, because the 3rd part in the for line is executed after the body (after the iteration
    {
        if (n==0)
        {
            cout<<i<<'\n';
            return 0;
        }
        else if (n<0)
        {
            cout<<i-1<<'\n';
            return 0;
        }
    }
    //We can also use another more clear way with more variables
    // int n, row=1, height=0, pyramid=0;
    // cin>>n;
    // for (int i = 2; pyramid <= n; i++)
    // {
    //     pyramid+=row;
    //     row+=i;
    //     if (pyramid <= n) height++;
    //  }
    //  cout<<height<<'\n';

}