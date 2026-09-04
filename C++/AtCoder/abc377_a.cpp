#include<iostream>
using namespace std;
int main()
{
    char C1,C2,C3;
    cin>>C1>>C2>>C3;
    if (C1!=C2 && C1!=C3 && C2!=C3 && 'A'<=C1 && C1<='C' && 'A'<=C2 && C2<='C' && 'A'<=C3 && C3<='C') cout<<"Yes"<<'\n';
    else cout<<"No"<<'\n';
    return 0;
    // We can use a string and a loop like this:
    // string S;
    // cin>>S;
    // if (S[0]!=S[1] && S[0]!=S[2] && S[1]!=S[2])
    // {
    //     for (char C:S)
    //     {
    //         if (!('A' <= C && C<= 'C'))
    //         {
    //             cout<<"No"<<endl;
    //             return 0;
    //         }
    //     }
    //     cout<<"Yes"<<'\n';
    // }
    // else cout<<"No"<<endl;
}