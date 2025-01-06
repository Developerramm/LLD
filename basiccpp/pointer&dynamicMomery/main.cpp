#include <iostream>
using namespace std;

void solve(int *arr)
{
    cout << sizeof(arr) << endl;
}

int main()
{

    int number = 50;
    int *ptr = &number;

    cout << number << endl;
    cout << &number << endl;
    cout << ptr << endl;
    cout << &ptr << endl;
    cout << (*ptr) << endl;

    (*ptr)++;
    cout << number << endl;
    cout << (*ptr) << endl;

    int *ptr = nullptr;
    cout << (*ptr) << endl;

    int arr[4] = {1, 2, 3, 4};
    cout << sizeof(arr) << endl;
    solve(arr);




    return 0;
}