#include<bits/stdc++.h>
using namespace std;
int main() {
    string s,t;
    cout<<"Enter a string s and t : "<<endl;
    cin>>s>>t;
    int freq[26] = {0};
    if(s.length() != t.length()){
        cout<<"False";
        return 0;
    }
        for(char ch : s){
            freq[ch - 'a']++;
        }
        for(char ch : t){
            freq[ch - 'a']--;
        }
        for(int i = 0; i<26; i++){
            if(freq[i] != 0){
                cout<<"False";
                return 0;
            }
    }
    cout<<"True";
    return 0;
}
//TC : O(n)
//SC : O(1)