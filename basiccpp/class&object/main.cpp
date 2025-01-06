#include <iostream>
using namespace std;

// class creation is done

class Student
{
public:
    // property
    int age;
    int weight;
    int height;
    string name;

    // default constructor
    Student()
    {
        cout << "This is default constructor " << endl;
    }

    // parameterized constructor
    Student(string name, int age, int weight, int height)
    {
        cout << "I am inside parameterized contructor " << endl;
        this->age = age;
        this->name = name;
        this->weight = weight;
        this->height = height;
    }

    // behahivor
    void running()
    {
        cout << "I am running " << endl;
    }

    void studing()
    {
        cout << name << " is studying " << endl;
    }

    ~Student()
    {
        cout << "I am inside destructor " << endl;
    }
};

int main()
{

    cout << sizeof(Student) << endl;

    // objection creation

    // static way
    Student s1;
    s1.age = 50;
    s1.name = "Ram Kumar";
    s1.weight = 60;
    s1.height = 163;

    s1.running();
    s1.studing();

    // dynamic way
    Student *s = new Student();
    s->name = "Ram Kumar";
    s->age = 20;
    s->weight = 70;
    s->height = 166;
    s->studing();
    s->running();

    cout << s->height << endl;

    Student X("Ram Kumar", 20, 30, 30);

    cout << X.age << endl;

    delete s;

    return 0;
}