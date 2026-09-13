//Problem
// You are giving a cher c you need to change his case.
//
// change his case means that if the char c is in the uppercase you need to make it in lowercase
//
// and if the char c is lowercase you need to make it in uppercase
//
// Input
//
// The only line contains only one char c
//
// Output
//
// print the answer of the problem

//Solution
#include<iostream>
using namespace std;
int main()
{
    char c;
    cin>>c;
    if (c<97) c+=32;
    else c-=32;
    //We don't cout immediately if we don't want to cast: char(c+32)/char(c-32)
    //Since the value of the operation is re-assigned to c (which is a char data type),
    //it is evaluated to its corresponding ASCII character
    return 0;
}