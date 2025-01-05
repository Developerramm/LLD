#include <iostream>
using namespace std;

int main()
{

    string name = "ram kumar maniyari";
    cout << name << endl;
    name = "ram kumar";
    cout << name << endl;

    string name1;
    name1.push_back('a');
    name1.push_back('b');
    name1.push_back('c');

    cout << name1 << endl;

    cout << name.length() << endl;
    name.append("ram");
    cout << name << endl;

    name.insert(4, "R");
    cout << name << endl;
    cout << name.substr(3, 5) << endl;

    return 0;
}