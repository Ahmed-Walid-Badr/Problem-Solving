#include <iostream>
#include <string>
using namespace std;
int main()
{
    int x;
    string ans;
    cin>>x;
    switch (x)
    {
        case 1:
        ans="one";
        break;
        case 2:
        ans="two";
        break;
        case 3:
        ans="three";
        break;
        case 4:
        ans="four";
        break;
        case 5:
        ans="five";
        break;
        case 6:
        ans="six";
        break;
        case 7:
        ans="seven";
        break;
        case 8:
        ans="eight";
        break;
        case 9:
        ans="nine";
        break;
        default:
        cout<<"Greater than 9"<<endl;
    }
    return 0;
}
