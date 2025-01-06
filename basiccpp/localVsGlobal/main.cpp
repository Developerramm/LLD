#include <iostream>
using namespace std;

int x = 2; // global variable

void fun(){
    int x = 60;
    cout << x << endl;
    ::x = 100;
    cout << ::x << endl;
}

int main(){

    cout << x << endl;
    x = 30; // global variable
    cout << x << endl;

    int x = 23; // local variable
    cout << x << endl;

    // accessing global variable
    cout << ::x << endl;

    {
        int x = 50;
        cout << x << endl;
        cout << ::x << endl;
    }

    fun();

    return 0;
}