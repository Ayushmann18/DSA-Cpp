#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a and b : "<<endl;
    cin>>a>>b;
    cout<<"Before swapping : a = "<<a<< " and b = "<<b<<endl;
    int temp = a;
    a = b;
    b = temp;
    cout<<"After swapping : a = "<<a<< " and b = "<<b<<endl;
    return 0;
}