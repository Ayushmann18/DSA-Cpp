//syntax
//switch(expression){
//    case constant1:       
//break;
#include<iostream>
using namespace std;
int main() {        
    char grade;
    cout<<"enter your grade : "<<endl;
    cin>>grade;
    switch(grade){
        case 'A': cout<< "you marks is between 90 to 100" <<endl;
        break;
        case 'B': cout<< "you marks is between 80 to 89" <<endl;
        break;
        case 'C': cout<< "you marks is between 70 to 79" <<endl;
        break;
        case 'D': cout<< "you marks is between 60 to 69" <<endl;
        break;
        case 'E': cout<< "you marks is between 50 to 59" <<endl;
        break;
        case 'F': cout<< "you marks is between 0 to 49" <<endl;
        break;
        default: cout<<"invalid grade!"<<endl; 
    }
    return 0;
}