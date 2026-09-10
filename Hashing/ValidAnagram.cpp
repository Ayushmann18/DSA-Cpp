#include <bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t){
    int n = s.size();
    int m = t.size();
    if(n != m){
        return false;
    }
    unordered_map<char, int> mp;
    for(int i = 0; i < n; i++){
        mp[s[i]]++;
    }
    for(int i = 0; i < m; i++){
        if(mp.find(t[i]) == mp.end()){
            return false;
        }
        mp[t[i]]--;
        if(mp[t[i]] == 0){
            mp.erase(t[i]);
        }
    }
    return true;
}
int main() {
    string s = "anagram";
    string t = "nagaram";
    if(isAnagram(s, t)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}