#include<iostream>
#include<string>
using namespace std;
int main()
{
    short t;
    cin>>t;
    while(t--)
    {
        short n;
        cin>>n;
        string s;
        cin>>s;
        if(n!=5)
        {
            cout<<"NO"<<'\n';
            continue;
        }

        bool Timur[5]={false},all_present=true;
        for (char c : s)
        {
            if (c=='T') Timur[0]=true;
            else if (c=='i') Timur[1]=true;
            else if (c=='m') Timur[2]=true;
            else if (c=='u') Timur[3]=true;
            else if (c=='r') Timur[4]=true;
        }
        for (bool present : Timur)
        {
            if (!present)
            {
                all_present=false;
            }
        }
        if (all_present) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
    //We can also use next_permutation and check over all possible permutations for timur for the string s
}