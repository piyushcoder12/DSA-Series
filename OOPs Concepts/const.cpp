#include<iostream>
using namespace std;

class abc
{
    int x;
    int *y;
    int z;

    public:
    // ctor is old method
    // abc(int _x,int _y,int _z=0)
    // {
    //     x=_x;
    //     y=new int(_y);
    //     z=_z;
    // }

    //initialisation list
    abc(int _x,int _y,int _z=0) : x(_x),y(new int(_y)),z(_z) // hamesha de fault argument right most likhe jate h
    {
        cout<< "in init list"<<endl;
    }

    // default constructor
    //  abc(int _x,int _y)
    // {
    //     x=_x;
    //     y=new int(_y);//argument le rah h
    // }
    int getX() const 
    {
        // int x=40;
        // cout<<x<<endl;
        return x;
    }

    void setX(int _val)
    {
        x=_val;
    }
    int getY() const
    {
        return *y;
    }
    int getZ() const
    {
        return z;
    }
    void setY(int _val)
    {
        *y=_val;
    }

};
void printabc(const abc &a)
{
    cout<<a.getX()<<" "<<a.getY()<<" "<< a.getZ()<<endl;
}
int main()
{
    abc a(1,2,3);
    // cout<<a.getX()<<endl;
    // cout<<a.getY()<<endl;
    printabc(a);
    return 0;
}

int main2()
{
//     const int x=5;//x is constant.
//     //initia;ization can be done.
//     //but we cant re-assign a value.
//    x=10;
//     cout<<x<<endl;

//  2. const with pointer

//const int *a =new int(2);//CONST data , NON-CONST pointer
// int const *a =new int (2);//if I write const before '*', then content will be constant 
// cout<<*a<<endl;
// // *a=20; // cant changer the constant of pointer
// // cout<<*a<<endl;
// int b=20;
// a=&b; // pointer itself can be reassigned.
// cout<<*a<<endl;
// return 0;

//CONST Pointer , but NON_CONST data .
// int *const a = new int(2);
// cout<<*a <<endl;
// *a =20;//chal jayega 
// cout<<*a<<endl;
// int b=50;
// a=&b;//nahi chalega, CONST pointer.

// return 0;

//CONST poinetr ,const data

// const int *const a=new int (10);
// cout<<*a <<endl;
// *a =50;
// int b =100;
// a=&b;


return 0;

}