#include<iostream>
using namespace std;
int DecToBin(int n){
    int ans =0, pow=1;
    while( n>0 ){
        int rem = n % 2 ;
        n /= 2;

        ans += (rem * pow);
        pow *= 10;
    }
    return ans;//binary number
}
int main() {
    int n = 50;
    cout<<DecToBin(n)<<endl;

    return 0;
}