
#include<bits/stdc++.h>
using namespace std;

void whitespace(string str)
{
    int count =0;

    for(int i=0;i<str.length;i++)
    {
        if(str[i]!=' ')
        {
            str[count++] = str[i];
        }
        else
        {
            str[count] = '\0';
        }
    }
    cout<<str;
    
}
int main()
{
    string str = " my name is piyush";
    whitespace(str);
    //cout<<str;
}