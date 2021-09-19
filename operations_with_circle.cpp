//
// Created by artem on 20.09.2021.
//
#include "operations_with_circle.h"

double dist_to_center(const Dot &point, Circle my_circle) {
    double dx = point.x - my_circle.get_center().x, dy = point.y - my_circle.get_center().y;
    return sqrt(dx * dx + dy * dy);
}

bool near_circle(double near_dist, const Dot &point, Circle &my_circle) {
    double dist_to_circle = abs(dist_to_center(point, my_circle) - my_circle.get_radius());
    if (near_dist - dist_to_circle >= 0.0)
        return true;
    else
        return false;
}

double calc_deg(const Dot &point, Circle &my_circle) {
    double deg = asin(point.y / dist_to_center(point, my_circle));
    if (point.x < 0.0)
        deg = PI - deg;
    if (deg < 0)
        deg += 2 * PI;
    return deg;
}