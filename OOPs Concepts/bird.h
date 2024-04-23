#if !defined(BIRD_H)
#define BIRD_H
#include<iostream>
class Bird
{
    virtual void eat()=0;
    virtual void fly()=0;
    //classe that inherits this classes 
    //has to implemnt pure virtual fns ;

};


class sparrow : public Bird 
{
public:
    void eat()
    {
        std::cout<<"Sparrow is eating \n";
    }
    void fly()
    {
        std::cout<<"Sparrow is flying \n";
    }
};

class sparrow : public Bird 
{
public:
    void eat()
    {
        std::cout<<"Sparrow is eating \n";
    }
    void fly()
    {
        std::cout<<"Sparrow is flying \n";
    }
};

#endif // BIRD_H

