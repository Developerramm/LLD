#include <iostream>
using namespace std;

int main()
{

    int a = 20;
    int b = 10;

    cout << (a + b) << endl;
    cout << (a - b) << endl;
    cout << (a * b) << endl;
    cout << (a / b) << endl;
    cout << (a % b) << endl;

    cout << (5 / 2) << endl;

    bool cond1 = true;
    bool cond2 = true;
    bool cond3 = false;

    if (cond1 && cond2 && cond3)
    {
        cout << "All conditions are true" << endl;
    }
    else
    {
        cout << "All conditions are not true" << endl;
    }

    if (cond1 || cond2 || cond3)
    {
        cout << "One of these condition is true" << endl;
    }
    else
    {
        cout << "All conditions are not true" << endl;
    }

    bool conditon = (5 != 10);
    cout << conditon << endl;

    cout << cond1 + cond2 << endl;

    cout << false + false << endl;
    cout << true + true << endl;


    int arr = 5;
    cout << arr << endl;
    arr += 10;
    cout << arr << endl;
    arr -= 10;
    cout << arr << endl;
    arr /=2;
    cout << arr << endl;
    arr *= 5;
    cout << arr << endl;
    arr %= 3;
    cout << arr << endl;


    cout << (5 & 5) << endl;
    cout << (5 & 4) << endl;

    cout << (5 | 4) << endl;
    cout << ~5 << endl;
    int var = -5;
    cout << ~var << endl;

    cout << (5 << 2) << endl;

    cout << (20 >> 1) << endl;

    cout << (~1) << endl;
    cout << (5 ^ 4) << endl;
    cout << (5 ^ 5) << endl;


    return 0;
}