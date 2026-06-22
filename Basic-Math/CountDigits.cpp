#include<iostream>
#include<math.h>
using namespace std;
int CountDigits(int n){
    if (n == 0)
        return 1;
        n = abs(n);
       int count = 0;
        while(n>0){
            count++;
            n = n/10;
        }
    
    return count;
}
int main(){
    int num;
    cout<<"Enter the number : "<<endl;
    cin>>num;   
    int count = CountDigits(num);
    cout<<"The number of digits in the number is : "<<count<<endl;
    return 0;       

}