#include<iostream>
using namespace std;
int main() {
    int n = 5;
    for (int i = 0; i <= n; i++){
        int num = 1;
        for(int k = 1; k <= n-i; k++){
            cout<<" ";
        }
        for(int j = 1; j<= i; j++){
            cout<<num<<" ";
            num = num * (i-j)/j; 
        }
        cout<<"\n";

    }
    return 0;
}