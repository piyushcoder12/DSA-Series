#include<iostream>
#include<math.h>
using namespace std;

int main()
{
 long long arr[63];
 int n=1;
 int i=0;
 for(int i=0;i<64;i++)
 {
   arr[i]=pow(2,i);
 }
 for(int i=0;i<63;i++)
 {
   cout<<arr[i]<<" ";
 }
 return 0;
 
}