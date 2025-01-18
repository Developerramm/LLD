#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    // attributes
    int id;
    int age;
    string name;
    int numberOfSubject;

    // constructor - default constructor
    Student()
    {
        cout << "This is default constructor " << endl;
    }

    // parameterized contructor
    Student(int id, int age, string name, int numberOfSubject)
    {
        cout << "This is parameterized constructor " << endl;
        this->id = id;
        this->age = age;
        this->name = name;
        this->numberOfSubject = numberOfSubject;
    }

    // copy constructor
    Student(const Student &srcobj)
    {
        cout << "Copy Constructor is called here " << endl;
        this->id = srcobj.id;
        this->age = srcobj.age;
        this->name = srcobj.name;
    }

    // behaviour
    void study()
    {
        cout << this->name << " Studying " << endl;
    }

    void sleep()
    {
        cout << this->name << " Sleeping " << endl;
    }

    void bunk()
    {
        cout << this->name << " bunking " << endl;
    }

    // destructor
    ~Student()
    {
        cout << "Student destructor " << endl;
    }
};

int main()
{
    Student A(1, 20, "Ram", 5);
    A.sleep();
    A.bunk();
    A.study();

    cout << A.name << endl;
    cout << A.age << endl;
    cout << A.numberOfSubject << endl;

    Student B = A;

    return 0;
}