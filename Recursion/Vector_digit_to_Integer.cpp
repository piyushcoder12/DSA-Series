//ques:given element in array vector To interger print 
#include<iostream>
#include<vector>
using namespace std;

//function
void printdigit(vector<int>&ans,int size)
{
    //base case
    if(size+1>=size)
    {
        return ;
    }
    //processing
    int digit=size%10;

    size=size/10; 
    ans.pop_back(digit);
}

int main()
{
    vector<int>ans;
    ans.push_back(1);
    ans.push_back(2);
    ans.push_back(3);
    ans.push_back(4);
    int size=ans.size();
    //function create
    printdigit(ans,size);

}