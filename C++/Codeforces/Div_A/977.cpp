#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    short k;
    cin>>k;
    while (k--)
    {
        if (n%10!=0) n--;
        else n/=10;
    }
    cout<<n<<'\n';
}