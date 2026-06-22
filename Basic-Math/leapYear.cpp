#include<iostream>
using namespace std;
int main(){
int year;
cout<<"Enter Year :"<<endl;
cin>>year;
if(year % 4 ==0){
    cout<<"It is a Leap Year!"<<endl;
}
else{
    cout<<"It is not a leap year!"<<endl;
}
return 0;
}