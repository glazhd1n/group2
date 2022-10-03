#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 100000, sum = 0;

    int a[n];

    for(int i = 0; cin >> a[i]; i++) {
        sum += a[i];
    }

    cout << sum << '\n';
}