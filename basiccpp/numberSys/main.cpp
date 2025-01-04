#include <iostream>
#include <cmath>
using namespace std;

int decimalToBinary(int n)
{
    // division method
    int ans = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n % 2;
        ans = bit * pow(10, i) + ans;
        n = n / 2;
        i = i + 1;
    }

    return ans;
}

int main()
{

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int ans = decimalToBinary(n);
    cout << ans << endl;

    return 0;
}