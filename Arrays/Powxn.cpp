#include <bits/stdc++.h>
using namespace std;
int main() {
    double x;
    int n;
    cin >> x >> n;
    long long power = n;
    if (power < 0) {
        x = 1 / x;
        power = -power;
    }
    double ans = 1;
    while (power > 0) {
        if (power % 2 == 1) {
            ans = ans * x;
        }
        x = x * x;
        power = power / 2;
    }
    cout << ans;
    return 0;
}