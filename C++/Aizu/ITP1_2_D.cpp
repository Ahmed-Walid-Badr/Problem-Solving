#include<iostream>
using namespace std;
int main()
{
    short W,H,X,Y,r;
    cin>>W>>H>>X>>Y>>r;
    if (X+r<=W && Y+r<=H && X-r>=0 && Y-r>=0) cout<<"Yes"<<'\n';
    else cout<<"No"<<'\n';
    return 0;
    // Check if the coordinates of the outer boarders of the circle (X+r,Y+r) & (X-r, Y-r)
    // are within the maximum length on X-axis (W) & the maximum height on the Y-axis (H)
    // and within the minimum length on X-axis (0) & height on Y-axis (0)
}