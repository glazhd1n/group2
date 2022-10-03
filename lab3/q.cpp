#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int p = sqrt(n) + 1;

    if(n == 1) {
        cout << "NO\n";
        return 0;
    }
    if(n == 2) {
        cout << "YES\n";
        return 0;
    } 
    if(n % 2 == 0) {
        cout << "NO\n";
        return 0;
    }

    for(int i = 3; i < p; i += 2) {
        if(n % i == 0) {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
}