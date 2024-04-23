//ques:Max element in array using recursion
#include<iostream>
#include<limits.h>
using namespace std;

//function
void findmax(int a[],int size,int index,int &maxi)
{
    //base case
    if(index>=size)
    {
        return ;
    }
    //processing 
    maxi=max(maxi,a[index]);

    //Recursive call
    findmax(a,size,index+1,maxi);
}
int main()
{
    int a[]={10,20,30,40,50};
    int size=5;
    int index=0;

    int maxi=INT_MIN;
    //function create
    findmax(a,size,index,maxi);
    cout<<"Maximun number in array"<<" "<<maxi;
}