#include<iostream>
using namespace std;


class abc{
    public:
    int x,y;

    void print() const
    {
        //this
        cout<<x<<" "<<y<< endl;
    }
};
int main()
{
    abc obj1={1,2};
    abc obj2={3,5};
    abc obj3={2,4};
    obj1.print();
    obj2.print();
    obj3.print();
    return 0;

}