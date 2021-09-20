#include "initialization.h"

vector<Dot> initialization(const int n, vector<Dot> &dots) {
    vector<Dot> temp(n);
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<double> a(-99, 99);
    for (auto i = 0; i < n; i++) {
        temp[i].x = a(gen);
        temp[i].y = a(gen);
    }
    return temp;
}