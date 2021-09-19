#include "Circle.h"
#include "operations_with_circle.h"
#include "print_info.h"

bool cmp(pair<double, Dot> &a, pair<double, Dot> &b) {
    return a.first < b.first;
}

int main() {
    int n;
    cout << "Enter the number of points: ";
    cin >> n;
    double near_dist = 10;
    Circle my_circle;
    vector<Dot> dots(n);
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<double> a(-99, 99);
    vector<pair<double, Dot>> dots_near_circle;
    dots_near_circle.reserve(n);
    for (auto i = 0; i < n; i++) {
        dots[i].x = a(gen);
        dots[i].y = a(gen);
    }
    for (const Dot point:dots) {
        if (near_circle(near_dist, point, my_circle)) {
            dots_near_circle.emplace_back(calc_deg(point, my_circle), point);
        }
    }
    sort(dots_near_circle.begin(), dots_near_circle.end(), cmp);
    print(dots_near_circle);
    return 0;
}