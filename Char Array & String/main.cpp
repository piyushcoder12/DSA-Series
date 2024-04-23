#include<iostream>
using namespace std;
int main()
{
    // char ch[10];

    // cin>>ch;

    // cout<<"Printing the value of ch:"<<ch<<endl;

    // for(int i=0;i<10;i++)
    // {
    //     cout<<ch[i]<<endl;
    // }
    //this code is not valid for piyush agarwal means space between two name pring only for one name 
    char ch[10];

    //input
    cin.getline(ch,10); //this getline function is used for print full name means name between space ,tab ,\n, print full name

    //print 
    cout<<"print the value of ch:"<<ch<<endl;

    //printing using loop
    for(int i=0;i<10;i++)
    {
        cout<<"At index:"<<i<<" "<<ch[i]<<endl;
    }
    return 0;
} 