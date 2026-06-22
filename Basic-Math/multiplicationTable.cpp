#include<iostream>
using namespace std;
int main(){
    int num;
    int mul;
    cout<<"Enter the number : "<<endl;
    cin>>num;
    for(int i = 1; i<=10; i++){
        mul = num * i;
        cout<<num<<" * "<<i<<" = "<<mul<<endl;
    }
    return 0;
}