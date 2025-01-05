#include <iostream>
using namespace std;

void copyArray(char actualArr[], char copyArr[])
{
    int aIndex = 0;
    int bIndex = 0;

    while (actualArr[aIndex] != '\0')
    {
        copyArr[bIndex] = actualArr[aIndex];
        aIndex++;
        bIndex++;
    }
    copyArr[bIndex] = '\0';
}

bool compareCharArray(char a[], char b[])
{

    int index = 0;
    bool ans = true;

    while (a[index] != '\0')
    {

        if (a[index] == b[index])
        {
            index++;
        }
        else
        {
            ans = false;
            break;
        }
    }

    return ans;
}

int main()
{

    // char actual[100] = "Ram kumar";
    // char ans[100];

    // copyArray(actual, ans);

    // cout << ans << endl;

    char a[100] = "ramkumar";
    char b[100] = "ramkumar";

    bool ans = compareCharArray(a,b);
    cout << ans << endl;

    return 0;
}