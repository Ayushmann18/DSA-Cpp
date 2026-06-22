#include<iostream>
#include<math.h>
using namespace std;
int CountDigits(int n){
    if (n == 0){
        return 1;
        n = abs(n);
    }
    int count = 0;      
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}
int main() {
    int n;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    int digits = CountDigits(n);
    cout<<"The number of digits in the number is : "<<digits<<endl;
    return 0;
}

