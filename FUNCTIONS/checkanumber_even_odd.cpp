// #include<bits/stdc++.h>
// using namespace std;

// void check_evenodd(int n)
// {
//     if(n%2==0)
//     {
//         cout<<"number is even";
//     }
//     else
//     cout<<"number is odd";
// }

// int main()
// {
//     system("cls");
//     int n;
//     cin>>n;

//     check_evenodd(n);
// }

// using first xor bitwise operator//

#include<bits/stdc++.h>
using namespace std;

// bool bitwise(int n)
// {
//     if((n^1)==(n+1))
//     return true;
//     else
//     return false;
// }
// int main()
// {
//     int n;
//     cin>>n;

//     bitwise(n)?cout<<"Even":cout<<"Odd";    
// }

// bitwise AND opertor used//
// void bitwise_and(int n)
// {
//     if((n&1)==0){
//     cout<<"Even";
//     }
//     else if((n&1)==1)
//     cout<<"Odd";
// }
// int main()
// {
//     int n;
//     cin>>n;

//     bitwise_and(n);

// }

//bitwise OR operator//

// void bitwise_or(int n)
// {
//     if((n|1)>n)
//     {
//         cout<<"Even";
//     }
//     else
//     cout<<"Odd";
// }
// int main()
// {
//     int n;
//     cin>>n;

//     bitwise_or(n);
// }

//bitwise right shift or left shift//

void bitwise(int n)
{
    if(n==(n>>1)<<1)
    {
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
}
int main()
{
    int n;
    cin>>n;

    bitwise(n);
}