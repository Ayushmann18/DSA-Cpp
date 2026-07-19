#include<bits/stdc++.h>
using namespace std;
bool isFreqSame(int freq1[], int freq2[]){
    for(int i = 0; i<26; i++){
        if(freq1[i] != freq2[i]){
            return false;
        }
    }
    return true;
}
int main() {
    string s1;
    cout<<"Enter a s1 string : "<<endl;
    cin>>s1;
    string s2;
    cout<<"Enter a s2 string : "<<endl;
    cin>>s2;
    int freq[26] = {0};
    for(int i = 0; i<s1.length(); i++){
        freq[s1[i] - 'a']++;
    }
    int WindSize = s1.length();
    for(int i = 0; i<s2.length(); i++){
        int WindIdx = 0; int idx = i;
        int WindFreq[26] = {0};
        while(WindIdx < WindSize && idx < s2.length()){
            WindFreq[s2[idx] - 'a']++;
            WindIdx++; idx++;
        }
        if(isFreqSame(freq, WindFreq)){
            cout<<"True";
            return 0;
        }
    }
    cout<<"False";
    return 0;
}