#include<iostream>
using namespace std;
///////////////////////////////////////method1////////////////////
// void  Maxnum(int n1,int n2,int n3)
// {
//     if(n1>=n2 && n1>=n3)
//     {
//         cout<<"n1 is max"<<" "<<n1;
//     }
//     else if(n2>=n1 && n2>=n3)
//     {
//         cout<<"n2 is max"<<" "<<n2;
//     }
//     else
//     cout<<"n3 is max"<<" "<<n3;
// }

//method 2//////////////////////////////////////////
// void maxnum(int num1,int num2,int num3)
// {
//     int ans=max(num1,num2);
//     int result=max(ans,num3);
//     cout<<result;
// }
///////////////method3///////////
int max_num(int n1,int n2,int n3)
{
     int ans=max(n1,n2);
     int result=max(ans,n3);

     return result;
}
int main()
{
   //Maxnum(3,2,4);
    //maxnum(2,3,4);

    int result=max_num(1,2,3);
    cout<<result;
}