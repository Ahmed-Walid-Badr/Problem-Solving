//Problem
// Given a number X. Determine in which of the following intervals the number
// X belongs to:
//
// [0,25], (25,50], (50,75], (75,100]
//
// Note:
//
// . if X belongs to any of the above intervals print "Interval " followed by
// the interval.
// . if X does not belong to any of the above intervals print "Out of
// Intervals"
// . The symbol '(' represents greater than.
// . The symbol ')' represents smaller than.
// . The symbol '[' represents greater than or equal.
// . The symbol ']' represents smaller than or equal.
//
// For example:
//
// [0,25] indicates numbers between o and 25.0000, including both.
//
// (25,50] indicates numbers greater than 25: (25.00001) up to 50.0000000.
//
// Input
//
// Only one line containing a number X (- 1000 ≤X≤1000).
//
// Output
//
// Print the answer to the problem above.

//Solution
#include <iostream>
using namespace std;
int main()
{
    float X;
    cin>>X;
    if (X>=0 && X<=100)
        {
        if (X<=25) cout<<"Interval [0,25]"<<'\n';
        else if (X<=50) cout<<"Interval (25,50]"<<'\n';
        else if (X<=75) cout<<"Interval (50,75]"<<'\n';
        else if (X<=100) cout<<"Interval (75,100]"<<'\n';
        }
    else cout<<"Out of Intervals"<<'\n';
    return 0;
}