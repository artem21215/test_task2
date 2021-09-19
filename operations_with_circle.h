//
// Created by artem on 20.09.2021.
//

#ifndef TEST_TASK2_OPERATIONS_WITH_CIRCLE_H
#define TEST_TASK2_OPERATIONS_WITH_CIRCLE_H

#include <random>
#include "Circle.h"
#include "iostream"

#define PI 3.14159265358979323846

double dist_to_center(const Dot &point, Circle my_circle);

bool near_circle(double near_dist, const Dot &point, Circle &my_circle);

double calc_deg(const Dot &point, Circle &my_circle);

#endif //TEST_TASK2_OPERATIONS_WITH_CIRCLE_H
