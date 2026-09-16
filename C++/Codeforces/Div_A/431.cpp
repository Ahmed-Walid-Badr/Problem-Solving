#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a[4]={},count=0;
    string s;
    for (int i=0;i<4;i++) cin>>a[i];
    cin>>s;
    for (char c:s)
    {
        count+=a[(c-'0')-1];
    }
    cout<<count<<'\n';
    return 0;
}