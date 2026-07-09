#include<iostream>//reversal Algorithm
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
    cout<<"Enter the Size of an array : "<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of an array : "<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int d;
    cout<<"Enter the number of left rotations : "<<endl;
    cin>>d;
    d= d%n;
    int temp[n];
    for(int i = 0; i<n; i++){
        temp[i-d] = arr[i];
    }
    for(int i = 0; i<d; i++){
        temp[n-d+i] = arr[i];
    }
    for(int i = 0; i<n; i++){
        cout<<temp[i]<<" ";
    }


    return 0;
}