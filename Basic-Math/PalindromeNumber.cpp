#include<iostream>
using namespace std;
int main(){
    int num,rem,temp;
    cout<<"Enter the number : "<<endl;
    cin>>num;
    temp = num;
    int reverse = 0;
    while(temp != 0){
        rem = temp%10;
        reverse = reverse*10 + rem;
        temp = temp/10;
    }
    if(num == reverse){
        cout<<"Thre number is a palindrome number! "<<endl;
    }
    else{
        cout<<"The number is not a palindrome number! "<<endl;
    }
}