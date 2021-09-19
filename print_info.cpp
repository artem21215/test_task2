//
// Created by artem on 20.09.2021.
//
#include "print_info.h"

void print(vector<pair<double, Dot>> &dots) {
    cout.precision(1);
    cout.width(15);
    cout.setf(ios::right);
    cout.setf(ios::fixed);
    cout << endl;
    for (auto ordered_dot:dots) {
        cout.width(1);
        cout << '(' << ordered_dot.second.x << ',' << ordered_dot.second.y << ')' << endl;
    }
}
