#include<iostream>
using namespace std;
int main(){
    int num;
    int first_num = 0;
    int sec_num = 1;
    cout<<"Enter the Number : "<<endl;
    cin>>num;
    cout<<"Fibonacci series : "<<endl;
    for(int i = 1; i<=num; i++){
        cout<<first_num<<" ";
        int next = first_num + sec_num;
        first_num = sec_num;
        sec_num = next;
    }
    return 0;


}