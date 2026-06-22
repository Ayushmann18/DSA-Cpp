#include<iostream>
using namespace std;
int main() {
    int arr[] = {10,20,30,40};
    int* ptr = arr;

    cout<<*(arr+1)<<endl;
    cout<<*(arr+2)<<endl;
    cout<<*(arr+3)<<endl;
    ptr++;
    cout<<*ptr<<endl;
    return 0;
}