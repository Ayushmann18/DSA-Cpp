#include<iostream>
using namespace std;
int main(){
    int num;
    int rev_num = 0;
    cout<<"Enter the number : "<<endl;
    cin>>num;
    while( num != 0){
        rev_num = rev_num*10 + num%10;
        num = num/10;

    }
    cout<<"The reverse of the number is : "<<rev_num<<endl;
    return 0;
}