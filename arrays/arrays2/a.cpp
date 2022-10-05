#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[9];
    a[0] = 7;
    a[1] = 6;
    a[2] = 1;
    a[3] = 2;
    a[4] = 3;
    a[5] = 8;
    a[6] = 9;
    a[7] = 10;
    a[8] = 13;

    cout << a[4] << '\n';
    a[4] = a[4] + 15;
    cout << a[4] << '\n';
    a[6] = a[6] - 8;
    a[2] = a[2] * a[3];
    a[7] = a[7] / a[2];
    cout << a[6] << ' ' << a[2] << ' ' << a[7];
}