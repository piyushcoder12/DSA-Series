#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Person 
{
public:
void walk()
{
    cout<<"Walking .."<<endl;
}
};
class Teacher : virtual public Person
{
public:
    void teach()
    {
        cout<<"teaching"<<endl;
    }
};

class Researcher : virtual public Person
{
public:
    void research()
    {
        cout<<"researching "<<endl;
    }
};


//Multiple inheritance
class Professor: public Teacher,public Researcher, virtual public Person
{
public:
    void bore()
    {
        cout<<"Boring... "<<endl;
    }
};

 

int main()
{
    Professor p;

    //Diamond Problem
    //Solution 1:Scope Resolution 
    // p.Teacher:walk()
    //p.Researcher::walk();

    //Solution 2:virtual

    p.walk();
    return 0;
}