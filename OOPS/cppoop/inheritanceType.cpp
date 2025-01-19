#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:
    string name;
    int employeeId;

public:
    // default constructor
    Employee()
    {
        cout << "Default contructor in employee" << endl;
    }
    Employee(const string &name, int employeeId)
    {
        cout << "Employee constructor is called " << endl;
        this->name = name;
        this->employeeId = employeeId;
    }

    void display() const
    {
        cout << "Employee " << name << " , Id " << employeeId << endl;
    }
};

// derived class for single inheritance
class Developer : public Employee
{
private:
    string programmingLanguage;

public:
    Developer(const string &name, int employeeId, string programmingLanguage)
    {
        cout << "Developer contructoru " << endl;
        this->name = name;
        this->employeeId = employeeId;
        this->programmingLanguage = programmingLanguage;
    }
};

// base class for multiple Inheritance
class ProjectManager
{
protected:
    string projectManaged;

public:
    // default constructor
    ProjectManager()
    {
        cout << "Default contructor of project manager" << endl;
    }
    ProjectManager(const string projectManaged)
    {
        this->projectManaged = projectManaged;
    }

    void manageProject() const
    {
        cout << "project Manager managing project " << projectManaged << endl;
    }
};

class TeamLead
{
protected:
    int teamSize;

public:
    // default constructor
    TeamLead()
    {
        cout << "default contructor of team lead" << endl;
    }
    TeamLead(int size) : teamSize(size) {}

    void leadTeam() const
    {
        cout << "Team lead leading a team of " << teamSize << " members." << endl;
    }
};

// Derived class for multiple Inheritance
class TechLead : public Employee, public ProjectManager, public TeamLead
{

public:
    TechLead(const string &name, int employeeId, const string projectManaged, int size)
    {
        this->name = name;
        this->employeeId = employeeId;
        this->projectManaged = projectManaged;
        this->teamSize = size;
    }

    void displayInfo() const
    {
        display();
        manageProject();
        leadTeam();
    }
};

// base class for multi level inheritance
class HRManager : public Employee
{
public:
    HRManager()
    {
        cout << "HRManager default contructor " << endl;
    }
    HRManager(const string &name, int employeeId)
    {
        this->name = name;
        this->employeeId = employeeId;
    }

    void handleHRDuties() const
    {
        cout << "HR Manager handling human resource duties" << endl;
    }
};

// derived class for multi level inheritance
class HRDirector : public HRManager
{
public:
    HRDirector(const string &name, int employeeId)
    {
        this->name = name;
        this->employeeId = employeeId;
    }

    void manageHRDepartment() const
    {
        cout << "HR Director managing the HR Department " << endl;
    }
};

class MarketingManager : public Employee
{
public:
    MarketingManager(const string &name, int employeeId)
    {
        this->name = name;
        this->employeeId = employeeId;
    }

    void createMarketingStrategy() const
    {
        std::cout << "Marketing Manager creating a marketing strategy." << std::endl;
    }
};

class SalesManager : public Employee
{
public:
    SalesManager(const string &name, int employeeId)
    {
        this->name = name;
        this->employeeId = employeeId;
    }

    void boostSales() const
    {
        std::cout << "Sales Manager boosting sales." << std::endl;
    }
};

class BusinessDevelopmentManager : public MarketingManager, public SalesManager
{
public:
    BusinessDevelopmentManager(const string &name, int employeeId) : MarketingManager(name, employeeId), SalesManager(name, employeeId) {};

    void coordinateBusinessDevelopment() const
    {
        createMarketingStrategy();
        boostSales();
        std::cout << "Business Development Manager coordinating business development efforts." << std::endl;
    }
};

int main()
{

    return 0;
}