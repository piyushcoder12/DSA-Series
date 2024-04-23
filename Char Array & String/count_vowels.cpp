#include<iostream>
#include<string.h>
using namespace std;

void countvowels(string str)
{
    string vowels="aeuioAEOIU";
    int count =0;
    for(int i=0;i<str.length();i++)
    {
        for(int j=0;j<vowels.length();j++)
        {
            if(str[i]==vowels[j])
            {
                count++;
            }

        }
    }
    cout<<count;
}
int main()
{
    string str = "piyush";
    countvowels(str);

}
