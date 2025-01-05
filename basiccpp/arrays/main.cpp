#include <iostream>
using namespace std;

int main(){

    cout << "Array in cpp " << endl;

    int arr[10000]; // declaration

    int brr[5] = {10,20,30,40,50};

    int crr[] = {20,3,5,3,43,243,53};

    int multipleof2[] = {2,4,6,8,10,12,14,16,18,20};

    // traverse the array
    for(int i = 0; i<=9; i++){
        cout << multipleof2[i] << " ";
    }

    cout << endl;


    // input in  array 
    int arr[5];
    for(int i = 0; i<5; i++){
        cout << "Enter the value of arr " << i << " ";
        cin >> arr[i];
        cout << endl;
    }

    for(int i = 0; i<5; i++){
        cout << arr[i] << " ";
    }

    cout << endl;



    return 0;
}