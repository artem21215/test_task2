#include "Circle.h"

[[nodiscard]] double Circle::get_radius() const {
    return radius;
}

Dot Circle::get_center() {
    return center;
}