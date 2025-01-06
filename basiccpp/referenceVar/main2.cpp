#include <iostream>
using namespace std;

void solve(int &a)
{
    cout << a << endl;
    a++;
    cout << a << endl;
}

void solve1(char &ch)
{
    cout << ch << endl;
    ch++;
    cout << ch << endl;
}

void solve2(string &str)
{
    cout << str << endl;
    str[0] = 'R';
    cout << str << endl;
}

void solve3(int arr[], int size, int &count)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
            count++;
    }
}

int main()
{
    int a = 50;
    cout << a << endl;
    solve(a);
    cout << a << endl;

    char ch = 'K';
    cout << ch << endl;
    solve1(ch);
    cout << ch << endl;

    string str = "ram Kumar";
    cout << str << endl;
    solve2(str);
    cout << str << endl;

    int arr[] = {1, 2, 3, 4, 5};
    int count = 0;
    int size = 5;
    solve3(arr, size, count);
    cout << count << endl;

    return 0;
}