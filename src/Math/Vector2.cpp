#include "Vector2.h"

Vector2::Vector2(float x, float y) : x(x), y(y) { }

std::ostream& operator<<(std::ostream& os, const Vector2& vector2) {
    os << "(" << vector2.x << ", " << vector2.y << ")"; 
    return os;
}