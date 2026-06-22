#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num,sum,temp;
    cout<<"Enter a Number : "<<endl;
    cin>>num;
    temp = num;
    sum = 0;
    while(temp > 0){
        int rem = temp % 10;
        sum = sum + (rem*rem*rem);
        temp = temp/10;
    }
    if(num == sum ){
        cout<< sum <<" is an Armstrong Number! "<<endl;
    }
    else{
        cout<< sum <<" is not an Armstrong Number! "<<endl;
    }

}