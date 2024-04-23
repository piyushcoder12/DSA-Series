//ques:given a interger digit to print vector store digit means interger to vector
#include<iostream>
#include<vector>
using namespace std;

//function
void printdigit(int num,vector<int>&ans)
{
    //base case
    if(num==0)
    {
        return ;
    }
    //processing 
    int digit =num%10;
    //update digit 
    num=num/10;
    //Recursive call
    printdigit(num,ans);

    ans.push_back(digit);

}

int main()
{
    int num=12345;
    //create vector
    vector<int>ans;
    printdigit(num,ans);

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}