#include<iostream>
using namespace std;
//t(n)=O(n); S(n)=O(1);
int Positivepower(int x, int n) {
    int result = 1;
    for(int i=1;i<=n;i++){
        result *= x;

    }
    return result;
}
int main(){
    int x,n;
    cout<<"enter x: "<<endl;
    cin>>x;
    cout<<"enter n: "<<endl;
    cin>>n; 
    if(n<0){
        cout<<"the negative powers are not allowed!"<<endl;
    }
    else{
          cout<<" x "<<" ^ "<<" n "<<" = "<<Positivepower(x,n)<<endl;
    }

  
}