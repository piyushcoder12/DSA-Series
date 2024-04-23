#include<iostream>
using namespace std;

class Box
{
    int width;
    //ctor
    Box(int _w) : width(_w){};

    public:
    int getwidth() const{
        return width;

    }
    void getwidth (int _val)
    {
        width=_val;
    }
    friend class Boxfactory;
};

class Boxfactory{
    int count;

    public:
    Box getabox(int _w)
    {
        ++count;
        return Box(_w);
    }
};
int main()
{
    Boxfactory bfact;
    Box b=bfact.getabox(5);

}