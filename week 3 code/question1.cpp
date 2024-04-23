//this question is array extra question class
//ques: print array left side negative or right side positive number

#include <iostream>
using namespace std;

void shiftNegativeOneside(int arr[],int n)
{
    int j=0;
    //j kahata hai iesa memory block jaha pr main negative 
    //number store kr skta hu

    for (int index=0;index<n;index++)
    {
        //index batata hai ki entire array ko traverse karne k liye
        if(arr[index]<0)
        {
            swap(arr[index],arr[j]);
            j++;

        }
    }
}
int main()
{
    int arr[]={0,-7,12,-10,-11,40,60};
    int n=7;

    shiftNegativeOneside(arr,n);

    //print karana hai
    cout<<"printing the array"<<endl;
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
}