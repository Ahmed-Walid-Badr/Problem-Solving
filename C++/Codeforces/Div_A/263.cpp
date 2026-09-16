#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    for (int row=1; row<=5; row++)
    {
        short input;
        for (int col=1; col<=5; col++)
        {
            cin >> input;
            if (input==1)
            {
                cout<<abs(3-row)+abs(3-col)<<'\n';//Or abs(6-row-col)
                return 0;
            }
        }
    }
}