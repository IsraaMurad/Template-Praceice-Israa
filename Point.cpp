/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "Point.h"
#include <math.h>
template <class T>
Point<T>::Point()
{
    x=0;
    y=0;
}

template <class T>
Point<T>::Point(T x, T y)
{
    this->x = x;
    this->y = y;
}

template <class T>
float Point<T>::distance(Point<T> point)
{
    T dx,dy;
    T the_distance;
    dx= point.x-this->x;
    dy= point.y-this->y;
    dx*=dx;
    dy*=dy;
    return sqr(dx+dy);

}
