#include <iostream>
using namespace std;

int main(){

    int a = 5;
    int &temp = a;
    cout << a << endl;
    cout << temp << endl;
    temp = temp * 10;
    cout << a << endl;
    cout << &a << endl;
    cout << &temp << endl;
    a++;
    cout << temp << endl;


    return 0;
}