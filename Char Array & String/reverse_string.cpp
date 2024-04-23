#include<iostream>
using namespace std;

int findlength(char ch[],int n)
{
    int length=0;
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

void reversestring(char ch[],int size)
{
    int i=0,j=size-1;
    while(i<=j)
    {
        swap(ch[i],ch[j]);
        i++;
        j--;
        cout<<ch[i]<<" ";
    }
    
}
int main()
{
    char ch[100];
    cin.getline(ch, 100);

    cout<<"Before"<<" "<<ch<<endl;
    int len=findlength(ch,100);
    cout<<len;
    reversestring(ch,len);
    cout<<"After"<<" "<<ch<<endl;
}