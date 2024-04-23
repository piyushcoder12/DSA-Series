#include <bits/stdc++.h>
using namespace std;

bool isprime(int n1)
{
    for(int i=2;i<n1;i++)
    {
        if(n1%i==0)
        {
            return false;
        }
       
    }
    return true;
}
void checkprime(int n1)
{
    for(int i=2;i<=n1;i++)
    {
        if(isprime(i))
        cout<<i<<" ";
    }
}
int main()
{
    system("cls");
    int n;
    cin>>n;

    checkprime(n);
    
}