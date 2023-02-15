#include <bits/stdc++.h>
using namespace std;
#define pi 3.1416

// Takbir Hasan ;)

class CommonTask
{
public:
    float b, h, c;

    void area()
    {
    }

    void circumference()
    {
    }

    void volume()
    {
    }
};

class Triangle : public CommonTask
{
public:
    float area()
    {
        return 0.5 * b * h;
    }
    float circumference()
    {
        return b + h + c;
    }
};

class Square : public CommonTask
{
public:
    float area()
    {
        return b * b;
    }
    float circumference()
    {
        return 4 * b;
    }
    float volume()
    {
        return b * b * b;
    }
};

class Circle : public CommonTask
{
public:
    float area()
    {
        return pi * b * b;
    }
    float circumference()
    {
        return 2 * pi * b;
    }
    float volume()
    {
        return 4 / 3 * pi * b * b * b;
    }
};

int main()
{
    cout << "What operation you want to do? " << endl;
    cout << "1. Circle " << endl;
    cout << "2. Square " << endl;
    cout << "3. Triangle " << endl;

    int opt;
    cin >> opt;

    if (opt == 1)
    {
        Circle c;
        int opt2;
        cout << "Which task you want to do?" << endl;
        cout << "1. Determine Area " << endl;
        cout << "2. Determine Volume " << endl;
        cout << "3. Determine Circumference " << endl;

        cin >> opt2;

        if (opt2 == 1)
        {
            cout << "Enter the radius of the circle: " << endl;
            cin >> c.b;
            cout << "Area: " << c.area() << endl;
        }
        if (opt2 == 2)
        {
            cout << "Enter the radius of the circle: " << endl;
            cin >> c.b;
            cout << "Volume: " << c.volume() << endl;
        }
        if (opt2 == 3)
        {
            cout << "Enter the radius of the circle: " << endl;
            cin >> c.b;
            cout << "Circumference: " << c.circumference() << endl;
        }
    }

    if (opt == 2)
    {
        Square s;
        int opt2;
        cout << "Which task you want to do?" << endl;
        cout << "1. Determine Area " << endl;
        cout << "2. Determine Volume " << endl;
        cout << "3. Determine Circumference " << endl;
        cin >> opt2;
        if (opt2 == 1)
        {
            cout << "Enter the length of one side of square: " << endl;
            cin >> s.b;
            cout << "Area: " << s.area() << endl;
        }
        if (opt2 == 2)
        {
            cout << "Enter the length of one side of square: " << endl;
            cin >> s.b;
            cout << "Volume: " << s.volume() << endl;
        }
        if (opt2 == 3)
        {
            cout << "Enter the length of one side of square: " << endl;
            cin >> s.b;
            cout << "Circumference: " << s.circumference() << endl;
        }
    }
    if (opt == 3)
    {
        Triangle t;
        int opt2;
        cout << "Which task you want to do?" << endl;
        cout << "1. Determine Area " << endl;
        cout << "2. Determine Circumference " << endl;
        cin >> opt2;
        if (opt2 == 1)
        {
            cout << "Enter the base and height of the Triangle: " << endl;
            cin >> t.b >> t.h;
            cout << "Area: " << t.area() << endl;
        }
        if (opt2 == 2)
        {
            cout << "Enter the three side of the Triangle: " << endl;
            cin >> t.b >> t.h >> t.c;
            cout << "Circumfernce: " << t.circumference() << endl;
        }
    }

    return 0;
}