#include<iostream>
using namespace std;
int main(){
    int dividend,divisor,remainder,quotient;
    cout<<"Enter the value of dividend :"<<endl;
    cin>>dividend;
    cout<<"Enter the value of divisor :"<<endl;
    cin>>divisor;
    quotient=dividend/divisor;
    cout<<"quotient is :"<<quotient<<endl;
    remainder = dividend%divisor;
    cout<<"Remainder is :"<<remainder<<endl;

}