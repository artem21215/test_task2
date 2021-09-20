#ifndef TEST_TASK2_CIRCLE_H
#define TEST_TASK2_CIRCLE_H

#include <iostream>

using namespace std;

#include "Dot.h"

class Circle {
    Dot center = Dot(0, 0);
    double radius = 80;
public:
    [[nodiscard]] double get_radius() const;

    Dot get_center();
};


#endif
