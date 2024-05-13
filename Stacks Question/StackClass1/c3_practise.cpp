#include<iostream>
#include<stack>
using namespace std;

int main()
{
    string str = "hello world my name is piyush agarwal";
    stack<char>st;

    for(int i=0;i<str.length();i++)
    {
        char ch = str[i];
        st.push(ch);
    }
    cout<<endl;

    //print
    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }
    cout<<endl;

}