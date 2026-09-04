#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    cout<<(s=="Hello,World!"?"AC":"WA")<<'\n';
    return 0;
}