#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number : "<<endl;
    cin>>n;
    for(int i = n; i>=1; i-- ){
        for(int j = i; j>0; j--){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}