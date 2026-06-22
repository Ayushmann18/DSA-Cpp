#include<iostream>
using namespace std;
int main() {
    int a = 5;
    int* p = &a;
    int** q = &p;

    cout<<*p<<endl;//a
     cout<<**q<<endl;//a
      cout<<p<<endl;//address of a 
       cout<<*q<<endl;//addresssof a 
    return 0;
}