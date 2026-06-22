#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter n :"<<endl;
    cin>>n;
     for(int i=0; i<=n; i++){
        if(i%2 != 0){
        cout<<i<<" ";
        
        }
     }
     cout<<endl;
    int oddsum = 0;

    for(int i=0; i<=n; i++){
        if(i%2 != 0){
            oddsum += i;

        }
    }
    cout<<"oddsum :"<<oddsum<<endl;
    return 0;
} 