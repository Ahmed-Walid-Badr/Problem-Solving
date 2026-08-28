#include <iostream>
using namespace std;
int main()
{
    short X,diff;
    cin>>X;
    if (0<=X && X<40) diff=40-X;
    else if (40<=X && X<70) diff=70-X;
    else if (70<=X && X<90) diff=90-X;
    else {cout<<"expert"<<'\n'; return 0;}
    cout<<diff<<'\n';
}
// We can also only work on one variable by making X=40-X, or 70-X, etc, but this would be less readable and less flexible for larger programs if X maybe needed again