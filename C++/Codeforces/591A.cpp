#include<iostream>
using namespace std;
int main()
{
    float D,V1,V2;
    cin>>D>>V1>>V2;
    cout<<D*V1/(V1+V2)<<'\n';//Either D=tV1+tV2---> t=D/(V1+V2), D1=tV1
    //Or the idea of D being divided proportionally between V1 and V2 as they both started motion with the same t
    return 0;
}