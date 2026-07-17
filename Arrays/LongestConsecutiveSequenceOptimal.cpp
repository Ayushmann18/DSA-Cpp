#include<bits/stdc++.h>
using namespace std;
int main() {
     int n;
    cout<<"Enter Size of an array : "<<endl;
    cin >> n;
    vector<int> arr(n);
    cout<<"Enter elements in an array : "<<endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    unordered_set<int> s;
    for(int i = 0; i<n; i++){
        s.insert(arr[i]);
    }
    int longest = 0;
    for(int num : s){
        if(s.find(num - 1) == s.end()){
            int current = num; 
            int count  = 1;
            while(s.find(current + 1) != s.end()){
                count++;
                current++;
            }
            longest = max(longest, count);
        }
    }
    cout<<longest;
    return 0;
}