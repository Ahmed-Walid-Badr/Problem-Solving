#include <iostream>
using namespace std;
int main()
{
    char c1,c2,c3; //The string S will be treated as three inputs by the compiler
    cin>>c1>>c2>>c3;
    short count=0;

    if (c1=='R') count++;

    if (c2=='R') count++;
    else if (c3=='R') {cout<<1<<'\n';return 0;} //Since else means that c2 !='R', then we don't need to write it and just write the other condition
    //return 0 here is used to prevent the last line of code to be executed if the else if was
    //c3='R' should be there to make sure there is at least one consecutive 'R' as c1 may be 'S', either c1 is S or R just having c2==S makes only 1 consecutive R possible


    if (c3=='R') count++;
    cout<<count<<'\n';
    return 0;
}