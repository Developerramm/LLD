#include <iostream>
using namespace std;

class Add
{

public:
    // constructor
    Add()
    {
        cout << "Default constructor " << endl;
    }

    int sum(int x, int y)
    {
        return x + y;
    }

    int sum(int x, int y, int z)
    {
        return x + y + z;
    }

    double sum(double x, double y)
    {
        return x + y;
    }
};

class Complex{

    public:
    int real;
    int imag;

    Complex(){
        real = imag = -1;
    }

    Complex(int r, int i):real(r),imag(i){};

    // add two complex number here
    Complex operator+ (Complex &B){
        Complex temp;
        temp.real = this->real + B.real;
        temp.imag = this->imag + B.imag;
        return temp;
    }

    // compare two complex number here
    bool operator== (Complex &B){
        return (this->real == B.real) && (this->imag == B.imag);
    }

    void print(){
        cout << this->real  << "+i" << this->imag << endl;
    }

};

int main()
{

    Complex A(2,5);
    Complex B(2,3);

    A.print();
    B.print();

    Complex C = A + B;
    C.print();



    // Add A;

    // double ans;
    // int ans1;

    // ans1 = A.sum(10, 20);
    // cout << ans1 << endl;

    // ans1 = A.sum(10, 20, 30);
    // cout << ans1 << endl;

    // ans = A.sum(3.4, 2.3);
    // cout << ans << endl;

    return 0;
}