#include<iostream>
using namespace std;
int main ()
{
    int a,n,m;
    cin>>a>>n>>m;
    n=(n/a)+(n%a!=0); //How many as are in the corresponding n and if there is a bit of n remaining not completing an a get another a
    m=(m/a)+(m%a!=0); //How many as are in the corresponding m and if there is a bit of m remaining not completing an a get another a
    cout<<n*m<<'\n';
    return 0;
}