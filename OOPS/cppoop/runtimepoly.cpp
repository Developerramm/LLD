#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw()
    {
        cout << "Generic drawing " << endl;
    }
};

class Circle : public Shape
{

public:
    void draw() override
    {
        cout << "Circle drawing " << endl;
    }
};

class Rectangle : public Shape
{
public:
    void draw() override
    {
        cout << "Rectangle drawing " << endl;
    }
};

void ShapeDrawing(Shape *s)
{
    s->draw(); // behave as a polymorphism
}

int main()
{

    Circle c;
    // c.draw();

    Rectangle R;
    // R.draw();
    // Shape *s = c;
    ShapeDrawing(&c);
    ShapeDrawing(&R);

    return 0;
}