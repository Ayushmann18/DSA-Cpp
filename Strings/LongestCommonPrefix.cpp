#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter the length of a string : "<<endl;
    cin>>n;
    vector<string> strs(n);
    cout<<"Enter an array of strings : "<<endl;
    for(int i = 0; i<n; i++){
        cin>>strs[i];
    }
    if(n == 0){
        cout<<"";
        return 0;
    }
    sort(strs.begin(), strs.end());
    string first = strs[0];
    string last = strs[n - 1];
    string ans = "";
    int len = min(first.length(), last.length());
    for(int i = 0; i<len; i++){
        if(first[i] == last[i]){
            ans += first[i];
        }
        else{
            break;
        }
    }
    cout<<ans;
    return 0;
}