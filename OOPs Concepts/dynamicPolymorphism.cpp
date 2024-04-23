#include<iostream>
using namespace std;

class Animal // this is the parent class 
{
    public:
    virtual void sound()
    {
        cout<<"Animal making sound"<<endl;
    }
};

class Dog:public Animal // this is the child class 
{
    public:
    void sound() override
    {
        cout<<"Dog is Baring "<<endl;
    }

};

class Cat:public Animal // this is the child class 
{
public:
    void sound() override
    {
        cout<<"Cat Meowing"<<endl;
    }
};
void sound(Animal *animal)
{
    animal->sound(); //polymorphism
    //animal->sound is behaving as p[er require object allocated at runtime]
}
int main()
{
    Animal *animal=new Dog();
    sound(animal);

    animal=new Cat();
    sound(animal);

    return 0;

}