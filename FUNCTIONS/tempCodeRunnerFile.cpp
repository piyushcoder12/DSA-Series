#include<iostream>
using namespace std;

int fun(int n)
{
    int count=0;
    while(n){
        n&=(n-1);
        count++;
    }
    return count;
}
int main()
{
    int result=fun(7);
    cout<<result;
}