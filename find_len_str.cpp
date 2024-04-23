#include <iostream>
using namespace std;

void length(char ch[],int n)
{
    int length=0;
    for(int i=0;i<n;i++)
    {
        if(ch[i]=='\0')
        {
            break;
        }
        else
        {
            length++;
        }
    }
    return length;
}

int main()
{

    char ch[10];
    int n=10;
    cin.getline(ch,10);
    int len= findlen(ch,10);
    length(ch,len);
    

}