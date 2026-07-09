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
    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int last = arr[n-1];
    for(int i = n-1; i>0; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = last;
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}