//ques:findout minimum element in array using recursion
#include<iostream>
#include<limits.h>
using namespace std;

//function
void findmini(int a[],int size,int index,int &mini)
{
    //base case
    if(index>=size)
    {
        return ;
    }
    //processing 
    mini=min(mini,a[index]);
    //Recursive call
    findmini(a,size,index+1,mini);
}
int main()
{
    int a[]={11,9,10,30,50,35};
    int size=6;
    int index=0;

    int mini=INT_MAX;
    //function create
    findmini(a,size,index,mini);
    cout<<"Minimum number in array"<<" "<<mini<<endl;

}