//arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
//array syntax 
//int arrayName[arraysiza];
#include<iostream>
using namespace std;
int main() {
    int arr[5];
    for(int i=0; i<5; i++){
        cout<<"enter the value of arr["<<i<<"] : "<<endl;
        cin>>arr[i];
    }
    for(int i=0; i<5; i++){
        cout<< arr[i] <<" ";
    }
    int ans = 0;
    for( int i=0; i<5; i++){
        ans = ans + arr[i];
    }
    cout<<endl;
    cout<<"sum of array is : "<<ans<<endl;

    return 0;
}
