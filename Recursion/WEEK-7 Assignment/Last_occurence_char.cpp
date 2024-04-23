//method 1: left to right
// #include<iostream>
// using namespace std;

// void lastoccLTR(string&s,char x,int i,int&ans)
// {
//     //base case
//     if(i>=s.size())
//     {
//         return;
//     }
//     //ek case solution
//     if(s[i]==x)
//     {
//         ans=i;
//     }
//     //Recursive call
//     lastoccLTR(s,x,i+1,ans);
// }
// int main()
//     {
//         string s;
//         cout<<"Enter the input string :";
//         cin>>s;

//         char x;
//         cout<<"Enter occurence of the string:";
//         cin>>x;

//         int ans=-1;
//         lastoccLTR(s,x,0,ans);
//         cout<<"Last Occurence of the string:"<<" "<<ans<<endl;
//     }


    //method 2: right to left

#include<iostream>
using namespace std;

void lastoccRTL(string&s,char x,int i,int&ans)
{
    //base case
    if(i<0)
    {
        return;
    }
    //ek case solution
    if(s[i]==x)
    {
        ans=i;
        return ;
    }
    //Recursive call
    lastoccRTL(s,x,i-1,ans);
}
int main()
    {
        string s;
        cout<<"Enter the input string :";
        cin>>s;

        char x;
        cout<<"Enter occurence of the string:";
        cin>>x;

        int ans=-1;
        lastoccRTL(s,x,s.size()-1,ans);
        cout<<"Last Occurence of the string:"<<" "<<ans<<endl;
    }