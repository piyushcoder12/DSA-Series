//check palindrome 

#include<iostream>
using namespace  std;

int  findlen(char ch[],int n)
{
    int length =0;
    for(int i=0;i<n;i++)
    {
        if(ch[i]=='\0')
        {
            break;
        }
        else{
            length++;
        }
    }
    return length;
}

bool checkpalindrome(char ch[], int n)
{
    int i=0,j= n-1;
    while(i<j)
    {
        if(ch[i]==ch[j])
        {
            return true;
        }
        else{
            return false;
        }
    }
}
int main()
{
    char ch[10];
    cin.getline(ch,10);

    int len = findlen(ch,10);

    bool gb = checkpalindrome(ch, len );

    if(gb)
    {
        cout<<"valid palindrome ";
    }
    else
    {
        cout<<"not a palindrome ";
    }
}
