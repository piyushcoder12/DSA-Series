#include<bits/stdc++.h>
using namespace std;

void bin(unsigned n)
{
    if(n>=1)
    {
        bin(n/2);
        cout<<n%2;
    }
}

int main()
{
    system("cls");
    unsigned n;
    cin>>n;

    bin(n);
}