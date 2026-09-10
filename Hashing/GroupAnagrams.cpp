#include <bits/stdc++.h>
using namespace std;
vector<vector<string>> groupAnagrams(vector<string> s){
    int n = s.size();
    unordered_map<string, vector<string>> m;
    for(int i = 0; i < n; i++){
        string temp = s[i];
        sort(temp.begin(), temp.end());
        m[temp].push_back(s[i]);
    }
    vector<vector<string>> ans;
    for(auto x : m){
        ans.push_back(x.second);
    }
    return ans;
}
int main() {
    int n = 6;
    vector<string> s(n);
    s = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> ans = groupAnagrams(s);
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}