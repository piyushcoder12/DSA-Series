#include<iostream>
#include <string>
#include<vector>

using namespace std;

class Bird
{
public:
    int age,weight;
    int nol;
    string color;

    void eat(){
        cout<<"Bird is eating "<<endl;
    }
    void fly()
    {
        cout<<"Bird is Flying "<<endl;
    }
};

class Sparrow:private Bird  ///mode of inheritance
{
public:
    Sparrow(int age,int weight,string color,int nol)
    {
        this->age=age;
        this->weight=weight;
        this->color=color;
        this->nol=nol;


    }

    int  getnol()
    {
        return this->nol;
    }
    void grassing()
    {
        cout<<"Sparrow is grassing "<<endl;
    }
};

class Peigon:public Bird  ///mode of inheritance
{
public:
    void guttering ()
    {
        cout<<"Peigon is guttering  "<<endl;
    }
};

class Parrot:public Bird  ///mode of inheritance
{
public:
    void speaking  ()
    {
        cout<<"Parrot is speaking "<<endl;
    }
};
int main()
{
    Sparrow s(1,1,"yellow",2);
    // cout<<s.color<<endl; 
    // s.eat();
    s.grassing();

    Peigon p;
    p.eat();
    p.guttering();

    Parrot pa;
    pa.eat();
    pa.speaking();


    return 0;

}