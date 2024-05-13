// STL method in C++
#include<iostream>
#include<stack>
using namespace std;

int main()
{
    // creation
    stack<int>st;

    //insertion
    st.push(10);
    st.push(20);
    st.push(30);

    st.pop();
    //print
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }

}