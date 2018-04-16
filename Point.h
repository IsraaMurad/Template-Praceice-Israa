#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

template <class T>

class Point
{
public:

    T x;
    T y;

    float distance(Point<T> point);

    Point();

    Point(T x,T y);
} ;



#endif // POINT_H_INCLUDED
