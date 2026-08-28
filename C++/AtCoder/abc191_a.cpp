#include<iostream>
using namespace std;
int main()
{
    short V,T,S,D;
    cin>>V>>T>>S>>D;
    if (V*T>D || V*S<D) cout<<"Yes"<<'\n'; // We can use the rule of d=vt for distance
    //We can look at it in the way of comparing distances where there is an interval of distance where the ball is invisible
    //Or in terms of time, where since velocity is constant the time determines the product's size to other products
    else cout<<"No"<<'\n';
    return 0;
}