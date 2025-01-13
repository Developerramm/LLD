#include <iostream>
using namespace std;
class Student
{

public:
    // attribute
    int id;
    int age;
    string name;
    int numberOfSubject;

    // constructor
    Student()
    {
        cout << "Student ka default constructor called" << endl;
    }

    // parameterized constructor
    Student(int id, int age, string name, int numberOfSubject)
    {
        this->id = id;
        this->age = age;
        this->name = name;
        this->numberOfSubject = numberOfSubject;

        cout << "parameterized constructor is called" << endl;
    }

    // copy constructor
    Student(const Student &srcobj)
    {
        this->id = srcobj.id;
        this->age = srcobj.age;
        this->name = srcobj.name;
        this->numberOfSubject = srcobj.numberOfSubject;

        cout << "copy constructor is called" << endl;
    }

    // behaviour

    void study()
    {
        cout << this->name << " Studying" << endl;
    }

    void sleep()
    {
        cout << this->name << " Sleeping" << endl;
    }

    void bunk()
    {
        cout << this->name << " Bunking" << endl;
    }

    // destructor
    ~Student()
    {
        cout << "Student Destructor " << endl;
    }
};

int main()
{

    Student A(1, 20, "Ranu", 6);
    Student B(2, 22, "Raman", 5);
    cout << A.age << endl;
    A.bunk();
    B.sleep();

    Student C = A;

    // dynamic allocation
    Student *D = new Student(3, 44, "ramdhir", 10);
    cout << D->name << endl;
    D->bunk();

    // Student A;
    // A.name = "Ram";
    // A.id = 1;
    // A.age = 15;
    // A.nos = 6;

    // A.study();

    // Student B;
    // B.name = "Ranu";
    // B.id = 1;
    // B.age = 15;
    // B.nos = 6;

    // B.bunk();

    delete D;
    return 0;
}