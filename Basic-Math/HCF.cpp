#include<iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"Enter the Value of a and b : "<<endl;
    cin>>a;
    cin>>b;
    int gcd = 1;
    for(int i = min (a,b); i>= 1 ; i--){
        if(a % i == 0 && b % i == 0){
            gcd = i;
            break;
        }
    }
    cout<<"gcd is : "<<gcd<<endl;

    return 0;
}
/*Eucledean algorithm using function
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << gcd(a, b);

    return 0;
}*/