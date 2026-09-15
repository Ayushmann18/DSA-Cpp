#include <bits/stdc++.h>
using namespace std;
int fun(int n){
    if(n == 0) return 0;
    if( n == 1) return 1;

    int ans = fun(n - 1) + fun(n - 2);
    return ans;
}
int main() {
    int n = 5;
    cout<<fun(n);
    return 0;
}