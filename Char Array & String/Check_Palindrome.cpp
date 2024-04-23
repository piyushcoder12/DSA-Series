#include<iostream>
using namespace std;

int findlen(char ch[],int n)
{
    int length=0;
    for(int i=0;i<n;i++)
    {
        if(ch[i]='\0')
        {
            break;
        }
        else{
            length++;
        }
    }
    return length;
}

bool CheckPalindrome(char ch[],int n)
{
    int i=0,j=n-1;
    while(i<=j)
    {
        if(ch[i]==ch[j])
        {
            i++;
            j--;
        }
        else{
            //character are not making
            return false;
        }
    }
}
//agar yaha pohjach gye ho 
//iska mtlb saare charcter match kr gye h
//iska mtlb palindrome h
//iska mtlb return true ;
int main()
{
    char ch[10];
    //access char
    cin.getline(ch,10);

    int len=findlen(ch,10);
    bool ispalindrome=CheckPalindrome(ch,len);
    if(ispalindrome==true)
    {
        cout<<" Valid palindrome"<<endl;
    }
    else{
        cout<<"Not Valid Palindrome"<<endl;
    }


}