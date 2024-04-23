// anagram findout between two string 
#include<bits/stdc++.h>
using namespace std;

bool anagram(string str1,string str2)
{
    int n1=str1.length();
    int n2 = str2.length();

    //find string length between two string are same or not 
    if(n1!= n2)
    {
        return false;
    }
    //sorted string 
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());

    for(int i=0;i<n1;i++)
    {
        if(str1[i] != str2[i])
        {
            return false;
    
        }
        else
        {
            return true;
        }
    }

}
int main()
{
    string str1="listen";
    string str2 ="siment";

    bool gb = anagram(str1,str2);
    if(gb)
    {
        cout<<"valid anagram ";
    }
    else
    {
        cout<<"not a anagram";
    }
}

