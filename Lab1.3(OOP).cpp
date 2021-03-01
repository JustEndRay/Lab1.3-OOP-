#include <iostream>
#include "Longlong.h"

int main()
{
    LongLong a, b, c;

    a.Init(5000, 8789);
    a.Display();
    b.Init(4356, 6542);
    b.Display();

    c = c.Subtruct(a, b);
    cout << "\nSubtruct(a - b): ";
    c.Display();
    c.Compare(a, b);
    cout << "\nc.tostring: ";
    cout << c.toString();

    return 0;
}