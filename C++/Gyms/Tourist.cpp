//Problem
// A lot of people come to see the Pyramids.
//
// We need to find out if this one is Egyptian or a Tourist.
//
// You are giving a last char in his passport.
//
// The last char in Egyptians Passports is the letter E
//
// otherwise, this person is a Tourist
//
// Input
//
// You are giving a last char in the person's passport
//
// Output
//
// Print "Egyptian" (without quotes) if this person is Egyptians
//
// Otherwise, print "Tourist"

//Solution
#include <iostream>
using namespace std;
int main()
{
    char C;
    cin>>C;
    switch(C)
    {
    case 'E':
        cout<<"Egyptian"<<'\n';
        break;
    default:
        cout<<"Tourist"<<'\n';
    }
    return 0;
    //It can be written using the ?: operator and the if/else statement
}