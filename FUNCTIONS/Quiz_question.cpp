#include<iostream>
using namespace std;
void fun(int &num,int k)
{
    num&=(~(1<<k));
}
int main()
{
    int k=1;
    int num=7;
    fun(num,k);
    cout<<num<<endl;
    return 0;
}