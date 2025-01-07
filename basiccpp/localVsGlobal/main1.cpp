#include <iostream>
using namespace std;

int main(){

    // const int x = 5; // constant varialbe
    // cout << x << endl;
    // x = 10;

    // int *p = &x;
    // *p = 10;

    

    const int *a = new int;
    // *a = 2;
    cout << *a << endl;
    delete a;
    int b = 5;
    a = &b;
    cout << *a << endl;


    return 0;
}