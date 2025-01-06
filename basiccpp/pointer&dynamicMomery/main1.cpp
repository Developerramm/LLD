#include <iostream>
using namespace std;

int main(){

    // dynamic memory
    int *ptr = new int;
    cout << (*ptr) << endl;
    *ptr = 5;
    cout << (*ptr) << endl;

    delete ptr;

    int *ptr = new int[5];
    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 5;
    ptr[3] = 10;
    ptr[4] = 100;

    for(int i = 0; i<5; i++){
        cout << ptr[i] << " ";
    }

    cout << endl;

    delete []ptr;


    char *ctr = new char[5];

    for(int i = 0; i<5; i++){
        cout << (*ctr) + i << " ";
    }
    delete []ctr;

    cout << endl;


    return 0;
}