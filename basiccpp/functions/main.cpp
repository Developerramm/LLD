#include <iostream>
using namespace std;

void printCounting(int n)
{

    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    // int n;
    // cout << "Enter a number : ";
    // cin >> n;

    printCounting(100);

    int ans = sum(5,10);
    cout << "The sum is " << ans << endl;

    return 0;
}