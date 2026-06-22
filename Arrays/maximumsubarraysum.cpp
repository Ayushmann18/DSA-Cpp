#include<iostream>
#include<limits.h>
using namespace std;
int main() {
    int n = 7;
    int arr[] = {3,-4,5,4,-1,7,-8};
    int Maxsum = INT_MIN;
    for(int st=0;st<n;st++){
        int currentsum = 0;
        for(int end=st;end<n;end++){
            currentsum += arr[end];
            Maxsum = max(Maxsum,currentsum);
        }
    }
    cout<<"maximum subarray sum = "<<Maxsum<<endl;
    return 0;
}