#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(a[j] < a[i]) swap(a[i], a[j]);
        }
        cout << a[0] << ' ' << a[1] << ' ' << a[2] << '\n';
    }

    for(int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }
}