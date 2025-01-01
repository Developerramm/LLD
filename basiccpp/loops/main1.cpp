#include <iostream>
using namespace std;

int main()
{

    cout << "break keyword in cpp " << endl;

    for (int i = 1; i <= 10; i++)
    {
        if (i == 6)
        {
            break;
        }

        cout << i << " ";
    }

    cout << endl;

    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
            continue;

        cout << i << " ";
    }

    cout << endl;
    cout << "While loop in cpp " << endl;

    int i = 1;
    while (i <= 5)
    {
        cout << i << " ";
        i = i + 1;
    }

    return 0;
}