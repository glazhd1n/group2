#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int max = a, min = a;

    if(max < b) {
        max = b;
    }
    if(max < c) {
        max = c;
    }

    if(min > b) {
        min = b;
    }
    if(min > c) {
        min = c;
    }

    cout << max - min << '\n';
}