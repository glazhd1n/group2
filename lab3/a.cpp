#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;  
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << a[4] << '\n';

    for(int i = 0 ; i < n; i++) {
        if(a[i] % 2 == 1) {
            cout << a[i] << ' ';
        }
    }
}