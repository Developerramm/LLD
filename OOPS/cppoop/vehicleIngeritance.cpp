#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
private:
    string name;

public:
    string model;
    int noOfTyres;

    string getName()
    {
        return this->name;
    }

    Vehicle()
    {
        cout << "This is default constructor" << endl;
    }

    // constructor
    Vehicle(string name, string model, int noOfTyres)
    {
        cout << "I am inside vehicle constructor" << endl;
        this->name = name;
        this->model = model;
        this->noOfTyres = noOfTyres;
    }

public:
    void start_engine()
    {
        cout << "Engine is starting " << name << " " << model << endl;
    }

    void stop_engine()
    {

        cout << "Engine is stopping " << name << " " << model << endl;
    }

    ~Vehicle()
    {
        cout << "I am inside Vehicle Desctructor " << endl;
    }
};

class Car : public Vehicle
{
public:
    int noOfDoors;
    string transmissionType;

    Car(string name, string model, int noOfTyres, int noOfDoors, string transmissionType) : Vehicle(name, model, noOfTyres)
    {
        cout << "I am inside car contructor " << endl;
        this->noOfDoors = noOfDoors;
        this->transmissionType = transmissionType;
    }

    void startAC()
    {
        cout << "AC has started of " << getName() << endl;
    }

    ~Car()
    {
        cout << "I am inside car destructor " << endl;
    }
};

class MotorCycle : public Vehicle
{
protected:
    string handleBarStyle;
    string suspensionType;

public:
    MotorCycle(string name, string model, int noOfTyres, string handleBarStyle, string suspensionType) : Vehicle(name, model, noOfTyres)
    {
        cout << "This is motorcycle constructor " << endl;
        this->handleBarStyle = handleBarStyle;
        this->suspensionType = suspensionType;
    }

    void wheelie()
    {
        cout << "wheelie kar rahe hai " << getName() << endl;
    }
    ~MotorCycle()
    {
        cout << "I am inside Motor cycle destructor " << endl;
    }
};

int main()
{
    Car A("maruti 800", "LXI", 4, 4, "Manual");
    A.start_engine();
    A.startAC();
    A.stop_engine();

    MotorCycle M("BMW", "VXI", 2, "U", "Hard");
    M.start_engine();
    M.wheelie();
    M.stop_engine();

    return 0;
}