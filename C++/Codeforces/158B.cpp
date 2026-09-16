#include<iostream>
using namespace std;
int main()
{
    int n,four=0,three=0,two=0,one=0,taxis=0;
    cin>>n;

    while(n--)
    {
        short x;
        cin>>x;
        if(x==1) one++;
        else if(x==2) two++;
        else if(x==3) three++;
        else if(x==4) four++;
    }

    taxis+=four;
    taxis+=three;
    if (one>three) one-=three;
    else one=0; //This condition can be removed the else and the if and leave one-=three as later one would be checked
    taxis+=two/2;
    if (two%2==1) taxis++, one-=2; //If the one was 2, 1 or 0 we get 0,-1,-2 after this operation
    //where if one was {2,1,0} we can fit it with the remaining group of two into one taxi

    //If one was zero or a -ve number this means that we had 2, 1 ,0 groups of one where all of them mean no groups of one are left now
    if (one>0) taxis+=one/4, taxis+=(one%4!=0); //If we have 0 to 3 groups of one remaining then we can fit all remaining into one taxi
    cout<<taxis<<'\n';
}
// A more clear way is two reset one to zero via one=max(0,one-2)
// Or though 2 conditions by leaving if (two%2==1) taxis++; as it is and adding if(one>=2) one-=2, else if("one<2" one>0) one--;
// And it would take 3 conditions if we merged (two%2==1) with each comparison of one as we have to write taxis++ for three times with one>=2, one==1, one==0