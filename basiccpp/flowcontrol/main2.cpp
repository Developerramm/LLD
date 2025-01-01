#include <iostream>
using namespace std;

int main()
{

    cout << "Switch case in control flow " << endl;
    char grade;
    cout << "Enter your grade: " << endl;
    cin >> grade;

    switch (grade)
    {
    case 'A':
        cout << "marks 90 to 100 " << endl;
        break;

    case 'B':
        cout << "marks 80 to 90 " << endl;
        break;

    case 'C':
        cout << "marks 70 to 80" << endl;
        break;

    case 'D':
        cout << "marks 60 to 70 " << endl;
        break;

    default:
        cout << "You are failed" << endl;
        break;
    }

    return 0;
}