#include <iostream>
using namespace std;
int main()
{
    short p;
    for (int i=1; i<=26; i++)
    {
        cin>>p;
        cout<<(char)(p+96);
    }
    cout<<'\n';
    return 0;
}