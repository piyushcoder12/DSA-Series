#include<bits/stdc++.h>
using namespace std;

void digit(int num){

    int r;
    if(num==0)
    {
        return ;
    }
    r=num%10;

    //digit will less
    digit(num/10);

    //print r
    cout<<r;
}
int main()
{
    system("cls");
    int n;
    cin>>n;

    digit(n);
    return 0;
}