#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
public:
    string name;
    string model;
    int noOfTyres;

    // constructor
    // default contructor
    Vehicle()
    {
        cout << "Vehicle default contructor " << endl;
    }

    // parameterized contructor
    Vehicle(string name, string model, int noOfTyres)
    {
        cout << "Vehicle constructor " << endl;
        this->name = name;
        this->model = model;
        this->noOfTyres = noOfTyres;
    }

    void start_engine()
    {
        cout << "Engine is starting " << name << " " << model << endl;
    }

    void stop_engine()
    {
        cout << "Engine is stopped " << name << " " << model << endl;
    }

    ~Vehicle()
    {
        cout << "Vehicle Destructor " << endl;
    }
};

class Car : public Vehicle
{

public:
    int noOfDoors;
    string transmissionType;

    // contructor

    // default contructor
    Car()
    {
        cout << "Car default contructor " << endl;
    }

    Car(string name, string model, int noOfTyres, int noOfDoors, string transmissionType) : Vehicle(name, model, noOfTyres)
    {
        this->noOfDoors = noOfDoors;
        this->transmissionType = transmissionType;
        cout << "Car parameterized contructor " << endl;
    }

    void startAC()
    {
        cout << "AC is started " << name << " " << model << endl;
    }

    ~Car()
    {
        cout << "Car destructor " << endl;
    }
};

class MotorCycle : public Vehicle
{
public:
    string handleBarStyle;
    string suspensionType;

    // default contructor
    MotorCycle()
    {
        cout << "Motor cycle default constructor " << endl;
    }

    MotorCycle(string name, string model, int noOfTyres, string handleBarStyle, string suspensionType)
    {
        cout << "Motor cycle parameterized contructor" << endl;
        this->name = name;
        this->model = model;
        this->noOfTyres = noOfTyres;
        this->handleBarStyle = handleBarStyle;
        this->suspensionType = suspensionType;
    }

    // method in motor cycle
    void wheelie()
    {
        cout << "Wheelie kar rahe hai " << name << endl;
    }

    // desctructor
    ~MotorCycle()
    {
        cout << "Motor cycle destructor " << endl;
    }
};

int main()
{

    Car A("Maruti", "LXI", 4, 4, "Manual");
    A.start_engine();
    A.startAC();
    A.stop_engine();

    MotorCycle M("BMW", "VXI", 2, "U", "Hard");
    M.start_engine();
    M.wheelie();
    M.stop_engine();

    return 0;
}