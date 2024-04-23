#include<iostream>
using namespace std;

// void countnum(int num)
// {
//     for(int i=1;i<=num;i++)
//     {
//         cout<<i<<endl;
//     }
//// ///////////////////////////////////method 2////////

int count(int num)
{
    for(int i=1;i<=num;i++)
    {
        return count(num);
    }
}
int main()
{
    int n;
    cout<<"Enter the any num";
    cin>>n;

    //countnum(n);
    int result=count(n);
    cout<<result;

}