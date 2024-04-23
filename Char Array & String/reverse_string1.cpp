#include<iostream>
using namespace std;



int main()
{
    char ch[7];
    cin.getline(ch,7);
    cout<<"Before"<<" "<<ch<<endl;
    int n=7;

    int i=0,j=n-1;
    while(i<=j)
    {
        swap(ch[i],ch[j]);
        i++;
        j--;
       
    }
     
    for(int i=0; i<n;i++)
    {
        cout<<ch[i]<<" ";
    }




    
    
}