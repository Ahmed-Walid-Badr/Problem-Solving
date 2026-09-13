//Problem
// Yousr brought a ring with diamond stone, she likes diamond stones.Diamond shape contains two up and down triangles with common base consists of odd given number of stars. Help her to draw it.
//
// Input
// n (always odd positive integer) (1≤ n ≤500)
//
// Output
// Print the pattern of diamond shape.
//
// Examples

// 3
//  *
// ***
//  *

// 5
//   *
//  ***
// *****
//  ***
//   *

//Solution
#include<iostream>
using namespace std;
int main()
{
    short n;
    cin>>n;
    for(int i=1;i<=n;i++) // A variable i is needed to be used as an index for the current row & odd number sequence
        //also we don't want to change n to use it
    {
        if (i<=(n/2)+1) //We have n rows & the central row is (n/2+1)-->integer division for odd nums +1
            //All rows from 1 to (n/2+1) obey the same increase in '*' and decrease in ' ' pattern
        {
            for(int j=(n/2+1)-i;j;j--) cout<<' '; //The number of spaces equals the distance from the center
            //this is because when we go to the next row we get the next odd number according to the current row index (i)
            //and the '*' replace 1 space on each side of the '*' line e.g. __*__ ---> _***_

            for(int k=(2*i)-1;k;k--) cout<<'*'; //The sequence general rule for odd numbers with staring index 1

            cout<<'\n';
        }
        else
        {
            for (int j=(i-(n/2+1));j;j--) cout<<' ';// The current distance from the center (same thing)

            for (int k=2*((n+1)-i)-1;k;k--) cout<<'*';// After the central row, the odd num sequence is now reversed
            //so we will get a rule for the reversed sequence. (n+1)-i gets the complement index (1-->5, 5-->1,4-->2,etc)
            //so the rule is getting this complement index (n+1)-i and using it to get the reversed odd sequence

            cout<<'\n';
        }
    }
}