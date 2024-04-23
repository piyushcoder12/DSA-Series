#include<iostream>
using namespace std;

class abc{
    public:
    int x1;
    int *y1;

    abc(int x,int y):x1(x),y1(new int (y)){}
    
    //default dumb copy constructor:it does Shallow Copy 
    //abstruction anc &obj
    abc(const abc &obj)
    {
        x1=obj.x1;
        y1=obj.y1;
    }

    //OUR SMART DEEP COPY
    abc(const abc &obj)
    {
        x1=obj.x1;
        y1=new int (*obj.y1);
    }

    void print() const
    {
        printf("X : %d\n PTR Y:%p\n Content of Y (*y).%d\n\n",x1,y1,*y1);
    }

    ~abc()
    {
        delete y1;
    }
};
int main()
{
    // abc a(1,2);
    // cout<<"Print inti a \n ";
    // a.print();

    // //abc 
    // abc b=a;//call hota hai , COPY CONSTRUCTOR
    // cout<<"Printinit b\n";
    // b.print();
    // *b.y1=20;
    // cout<<"Printinit b\n";
    // b.print();

    // cout<<"Printint a\n";
    // a.print();


    abc *a= new abc (1,2);
    abc b=*a;
    delete a;
    b.print();


    return 0;
}