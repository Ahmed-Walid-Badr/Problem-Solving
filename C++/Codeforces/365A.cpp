#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int a,n,k;
    cin>>n>>k;
    int count=n;
    while(n--)
    {

        cin>>a;
        vector<bool> all_k(k+1,false);//from 0 to k is k+1 values
        while (a>0)
        {
            if(a%10<=k) all_k[a%10]=true;
            a/=10;
        }
        for (bool present : all_k) //ai won't exceed 10^9 meaning no more than 10 digits
        {
            if(!present)
            {
                count--;
                break;
            }
        }

    }
    cout<<count<<'\n';
    return 0;
    //we can also make count=0 instead of count=n,and put count++; right before the loop checking each number
    //this assumes that ai is a k-good number until the opposite is proven, also count=n; does this but on a larger scale-
    //assuming all ai are valid k-good numbers until the opposite is proven for each one
}