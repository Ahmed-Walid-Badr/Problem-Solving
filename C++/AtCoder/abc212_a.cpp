#include <iostream>
using namespace std;
int main()
{
    int A,B;
    cin>>A>>B;
    if (A==0) cout<<"Silver"<<'\n';
    else if (B==0) cout<<"Gold"<<'\n';
    else cout<<"Alloy"<<'\n';
    return 0;
    //also we can take only one input A for example and see
    //if this input A equals 0 then Silver, 100 then Gold and alloy otherwise
}