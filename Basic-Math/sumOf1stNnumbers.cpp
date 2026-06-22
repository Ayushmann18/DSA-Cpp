#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number :"<<endl;
    cin>>num;
    int sum = 0;
    for(int i = 0; i<=num; i++){
        sum = sum + i;
    }
    cout<<"The sum of numbers is : "<<sum<<endl;
    return 0;
}