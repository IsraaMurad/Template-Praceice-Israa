#include <SFML/Graphics.hpp>
#include "Point.h"
#include <iostream>

int main()
{
    Point<int> a;
    Point<int> b;
    a.x=2;
    a.y=3;
    b.x=12;
    b.y=13;
    std::cout << a.distance(b);
    return 0;
}
