#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter your age : " <<endl;
    cin >> age;

    if(age > 80 ){
        cout << "Your age is wrong" << endl;
        return 0;
    }
    cout << "Your age is " << age << endl;

    return 0;
}