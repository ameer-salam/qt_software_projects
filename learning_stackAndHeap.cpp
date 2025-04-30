#include <iostream>
#include <string>

using namespace std;

class Example{
    public:

    int age;
    string name;

    Example(int age, string name)
    {
        this->age=age;
        this->name=name;
    }
};

Example exe(int a, string b)
{
    return Example(a, b);
}

int main()
{
    int age = 21;
    string name = "Amee Salam";

    Example person = exe(age, name);
    cout<<person.age<<"  "<<person.name<<endl;

    return 0;
}