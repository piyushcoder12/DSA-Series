#include<iostream>
using namespace std;


void convertToUppercase(char ch[],int n)
{
    int index=0;
    while(ch[index]!='\0')
    {
        char currcharacter=ch[index];
        //check if lowercase,then convert to upper case
        if(currcharacter>='a'&&currcharacter<='z')
        {
            ch[index]=currcharacter-'a'+'A';
        }
        index++;
    }
}
int main()
{
   char ch[100];
   cin.getline(ch,100);

    convertToUppercase(ch,100);
    cout<<"after"<<" "<<ch<<endl;

}