#include<iostream>
using namespace std;
int main(){
    int num,rem;
    int sum = 0;
    cout<<"Enter the number :"<<endl;
    cin>>num;
    while(num != 0){
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    cout<<"Sum of the numbers is : "<<sum<<endl;
    return 0;
    
}