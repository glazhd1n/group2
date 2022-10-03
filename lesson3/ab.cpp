#include <bits/stdc++.h>

int main() {
    int a = 5;
    {
        int a = 7;
        {
            int a = 8;
            {
                int a = 1;
            }
            a = a + a + a;

        }
        cout << a << endl;
    }
}