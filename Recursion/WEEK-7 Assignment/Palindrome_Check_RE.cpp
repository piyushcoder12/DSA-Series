#include<iostream>
using namespace std;

bool palindrome(string &s,int start,int end)
{
    //base case
    if(start>=end)
    {
        return true;
    }
    //one case sol
    if(s[start]!=s[end])
    {
        return false;
    }
    //recursive call
    return palindrome(s,start+1,end-1);
}
int main()
{
    string s;
    cin>>s;
    cout<<palindrome(s,0,s.size()-1)<<endl;
}