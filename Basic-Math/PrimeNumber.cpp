#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Number : "<<endl;
    cin>>num;
    bool isPrime = true;
    for(int i = 2; i<num; i++){
        if(num%i == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime == false){
        cout<<"The number is not a prime number "<<endl;
    }
    else{
        cout<<"The number is a Prime Number "<<endl;
    }
}