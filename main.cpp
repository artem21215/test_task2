#include "Circle.h"
#include "operations_with_circle.h"
#include "print_info.h"
#include "initialization.h"

bool cmp(pair<double, Dot> &a, pair<double, Dot> &b) {
    return a.first < b.first;
}

int main() {
    int n;
    cout << "Enter the number of points: ";
    cin >> n;
    double near_dist = 10.0;
    Circle my_circle;
    vector<Dot> dots = initialization(n, dots);
    vector<pair<double, Dot>> dots_near_circle;
    dots_near_circle.reserve(n);
    for (Dot point:dots) {
        if (near_circle(near_dist, point, my_circle)) {
            dots_near_circle.emplace_back(calc_deg(point, my_circle), point);
        }
    }
    sort(dots_near_circle.begin(), dots_near_circle.end(), cmp);
    print(dots_near_circle);
    return 0;
}