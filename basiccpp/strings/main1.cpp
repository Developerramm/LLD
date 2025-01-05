#include <iostream>
using namespace std;

int getStringLength(char arr[])
{
    int count = 0;
    int index = 0;

    while (arr[index] != '\0')
    {
        count++;
        index++;
    }
    return count;
}

void concateArray(char a[], char b[])
{
    int aIndex = getStringLength(a);
    int bIndex = 0;

    while (b[bIndex] != '\0')
    {
        a[aIndex++] = b[bIndex++];
    }

    a[aIndex] = '\0';
}

int main()
{

    // char arr[] = "ramkumar";

    // int ans = getStringLength(arr);
    // cout << ans << endl;

    char a[50] = "ram";
    char b[50] = " kumar";

    concateArray(a, b);
    cout << a << endl;

    return 0;
}