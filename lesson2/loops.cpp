#include <bits/stdc++.h>

using namespace std;

int main() {
    int a;
    cin >> a;

    int mx = -1e9;

    int i = 0;
    while(i < a) {
        int x;
        cin >> x;
        if(mx < x) {
            mx = x;
        }
        i++;
    }

    cout << mx << '\n';
}