#include<iostream>
#include<string>
class Linked
{
    private:
        std::string grade = "Hello, i am a Linked List";
    public:
        void sayName();
};

void Linked::sayName()
{
    std::cout << grade << std::endl;
};


int main()
{
    Linked l;
    l.sayName();
}