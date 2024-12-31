#include <iostream>
using namespace std;

int main()
{

    cout << "switch case in cpp " << endl;

    char grade;
    cout << "Enter Your grade " << endl;
    cin >> grade;

    if (grade == 'A')
    {
        cout << "Your mark is greater than 90" << endl;
    }
    else if (grade == 'B')
    {
        cout << "Your marks will be in range of 80 and 90" << endl;
    }
    else if (grade == 'C')
    {
        cout << "Your marks will be in range of 70 and 80" << endl;
    }
    else if (grade == 'D')
    {
        cout << "Your marks will be in range of 60 and 70" << endl;
    }
    else
    {
        cout << "You are failed " << endl;
    }

    return 0;
}