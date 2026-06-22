#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int base,exp;
    cout<<"Enter the value of base :"<<endl;
    cin>>base;
    cout<<"Enter the value of exp :"<<endl;
    cin>>exp;
    int result = pow(base,exp);
    cout<<base<<" ^ "<<exp<<" = "<<result<<endl;
    return 0;
}