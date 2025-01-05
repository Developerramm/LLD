#include <iostream>
using namespace std;

int totalSumOfArray(int *arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
}

void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void storeMultipleOf10(int *arr, int size)
{

    for (int i = 0; i <= 9; i++)
    {
        arr[i] = 10 * (i + 1);
    }
}

void flipArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            arr[i] = 1;
        }
        else if (arr[i] == 1)
        {
            arr[i] = 0;
        }
    }
}

void reverseArray(int *arr, int size)
{
    int i = 0;
    int j = size - 1;
    while (j > i)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main()
{
    cout << "Array in cpp " << endl;

    int arr[] = {10, 20, 30, 40, 50};

    int sum = totalSumOfArray(arr, 5);
    cout << sum << endl;
    printArray(arr, 5);

    int arr1[10];
    int size = 10;
    storeMultipleOf10(arr1, size);
    printArray(arr1, size);

    int flip[] = {1, 1, 1, 0, 0, 0};
    int size1 = 6;
    printArray(flip, size1);
    flipArray(flip, size1);
    printArray(flip, size1);

    int brr[] = {1, 2, 3, 4, 5};
    int bsize = 5;
    printArray(brr, bsize);
    reverseArray(brr, bsize);
    printArray(brr, bsize);

    return 0;
}