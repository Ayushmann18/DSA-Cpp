#include<iostream>
using namespace std;
int sumofdigits(int num){
    int digitsum = 0;

    while( num>0 ){
        int lastdigit = num%10;
        num /= 10;

        digitsum += lastdigit;

    }
    return digitsum;
}
int main() {
    cout<<"sum = "<<sumofdigits(2356)<<endl;
    return 0;
}