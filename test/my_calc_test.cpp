#define CATCH_CONFIG_MAIN

#include "../Dot.h"
#include "../initialization.h"
#include "../operations_with_circle.h"
#include "../thirdparty/catch.hpp"

TEST_CASE("dist_to_center", "[calc_circle_functions]") {
    Dot dot1(80, 0), dot2(0, 0), dot3(1, 1),
            dot4(-1, -1), dot5(-80, 0), dot6(0, 80), dot7(-80, 0), dot8(0, -80);
    Circle my_circle;
    double dist1 = dist_to_center(dot1, my_circle);
    double dist2 = dist_to_center(dot2, my_circle);
    double dist3 = dist_to_center(dot3, my_circle);
    double dist4 = dist_to_center(dot4, my_circle);
    double dist5 = dist_to_center(dot5, my_circle);
    double dist6 = dist_to_center(dot6, my_circle);
    double dist7 = dist_to_center(dot7, my_circle);
    double dist8 = dist_to_center(dot8, my_circle);
    REQUIRE(abs(dist1 - 80.0) < 0.000000001);
    REQUIRE(abs(dist2 - 0.0) < 0.000000001);
    REQUIRE(abs(dist3 - sqrt(2)) < 0.000000001);
    REQUIRE(abs(dist4 - sqrt(2)) < 0.000000001);
    REQUIRE(abs(dist5 - 80.0) < 0.000000001);
    REQUIRE(abs(dist6 - 80.0) < 0.000000001);
    REQUIRE(abs(dist7 - 80.0) < 0.000000001);
    REQUIRE(abs(dist8 - 80.0) < 0.000000001);
}

TEST_CASE("near_center", "[calc_circle_functions]") {
    Dot dot1(80, 0), dot2(0, 0), dot3(70, 0),
            dot4(90, 0), dot5(0, -70), dot6(0, 90), dot7(-50, -50), dot8(0, 70);
    Circle my_circle;
    double near_dist = 10;
    REQUIRE(near_circle(near_dist, dot1, my_circle));
    REQUIRE(!near_circle(near_dist, dot2, my_circle));
    REQUIRE(near_circle(near_dist, dot3, my_circle));
    REQUIRE(near_circle(near_dist, dot4, my_circle));
    REQUIRE(near_circle(near_dist, dot5, my_circle));
    REQUIRE(near_circle(near_dist, dot6, my_circle));
    REQUIRE(near_circle(near_dist, dot7, my_circle));
    REQUIRE(near_circle(near_dist, dot8, my_circle));
}

TEST_CASE("calc_deg", "[calc_circle_functions]") {
    Dot dot1(80, 0), dot2(60, 10), dot3(70, -1),
            dot4(45, 45), dot5(10, 50), dot6(0, 1000), dot7(0, 100), dot8(-45, 45),
            dot9(-30, 30), dot10(-80, 0), dot11(-50, -50),
            dot12(-1, -1), dot13(-80, 0), dot14(50, -50);
    Circle my_circle;
    double near_dist = 10;
    REQUIRE(calc_deg(dot1, my_circle) < calc_deg(dot2, my_circle));
    REQUIRE(calc_deg(dot2, my_circle) < calc_deg(dot3, my_circle));
    REQUIRE(calc_deg(dot3, my_circle) > calc_deg(dot4, my_circle));
    REQUIRE(calc_deg(dot4, my_circle) < calc_deg(dot5, my_circle));
    REQUIRE(calc_deg(dot5, my_circle) < calc_deg(dot6, my_circle));
    REQUIRE(abs(calc_deg(dot6, my_circle) - calc_deg(dot7, my_circle)) < 0.000000001);
    REQUIRE(calc_deg(dot7, my_circle) < calc_deg(dot8, my_circle));
    REQUIRE(abs(calc_deg(dot8, my_circle) - calc_deg(dot9, my_circle)) < 0.000000001);
    REQUIRE(calc_deg(dot9, my_circle) < calc_deg(dot10, my_circle));
    REQUIRE(calc_deg(dot10, my_circle) < calc_deg(dot11, my_circle));
    REQUIRE(abs(calc_deg(dot11, my_circle) - calc_deg(dot12, my_circle)) < 0.000000001);
    REQUIRE(calc_deg(dot12, my_circle) > calc_deg(dot13, my_circle));
    REQUIRE(calc_deg(dot12, my_circle) < calc_deg(dot14, my_circle));
    REQUIRE(calc_deg(dot14, my_circle) < calc_deg(dot3, my_circle));
}