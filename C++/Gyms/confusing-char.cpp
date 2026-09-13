// you are giving a char c and you need to print if case of this char.
//
// The case of char is this char upper or lower.
//
// Input
//
// The only line contains one char c
//
// Output
//
// print "Upper" if this char in upper case
//
// otherwise print "Lower"

//Solution
#include <iostream>
using namespace std;
int main()
{
    char c;
    cin>>c;
    if ('A'<=c && c<='Z') cout <<"Upper"<<'\n'; //The chars evaluate to their corresponding ASCII values
    //and are evaluated through the operators <= & >= so if c's value is in the range between A's & Z's value then it is a capital alphabet
    // else it is guaranteed to be an English letter so it is a small letter
    else cout <<"Lower"<<'\n'; // 'a'<=c && c<='z'
    return 0;
    //We can also use another mathematical trick:
    // if (c-97>=0) cout<<"Lower"<<'\n'; // This is because we have only two possible ranges for input
                                        // which are capital: 67 to 92 & small: 97 to 122
    // else cout<<"Upper"<<'\n';
}