/*#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=10;i++){
        cout<<i<<" ";
        if(i==5){
            break;
        }
    }
    return 0;
}*/
#include<iostream>
using namespace std;
int main(){
   for(int i=1;i<=10;i++){
    if(i==5){
        continue;
    }
    cout<<i<<" ";
   }
   return 0;
}