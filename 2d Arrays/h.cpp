#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int mn = INT_MAX, mn_pos = 0;
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = 0; j < m; j++) {
            int x;
            cin >> x;
            sum += x;
        }

        if(sum < mn) {
            mn = sum;
            mn_pos = i + 1;
        }
    }

    cout << mn_pos << '\n';
}