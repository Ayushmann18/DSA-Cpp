#include<iostream>
#include<vector>
#include<list>
#include<queue>
#include<set>
#include<stack>
#include<unordered_map>
#include<unordered_set>
#include<deque>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cout<<"Enter the size of an array : "<<endl;
    cin>>n;
    //entering the array elements
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int first = arr[0];
    for(int i = 0; i< n-1; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = first;
    cout<<"Array after left rotation : "<<endl;
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}