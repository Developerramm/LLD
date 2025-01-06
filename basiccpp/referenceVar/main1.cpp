#include <iostream>
using namespace std;

void solve(int a)
{
    cout << a << endl;
    a++;
    cout << a << endl;
}

void solve1(char ch)
{
    cout << ch << endl;
    ch++;
    cout << ch << endl;
}

void solve2(string str)
{
    cout << str << endl;
    str[0] = 'K';
    cout << str << endl;
}

int main()
{

    int a = 5;
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

    return 0;
}