#include<iostream>
using namespace std;
int SumOfDigits(int n){
    int digSum = 0;
    while(n > 0){
        int lastDig = n % 10;
        n = n/10;
        digSum += lastDig;
    }
    return digSum;
}
int main() {
    cout<<"Sum = "<<SumOfDigits(2356)<<endl;
    return 0;
}