#include<bits/stdc++.h>
using namespace std;
int main() {
    string chars;
    cout<<"Enter a String chars : "<<endl;
    cin>>chars;
    int n = chars.size();
    int idx = 0;
    for(int i = 0; i<n; i++){
        int count = 0;
        char ch = chars[i];
        while(i < n && chars[i] == ch){
            count++; i++;
        }
        if(count == 1){
            chars[idx++] = ch;
        }
        else{
            chars[idx++] = ch;
            string str = to_string(count);for(int dig : str){
                chars[idx++] = dig;
            }
        }
        i--;
    }
    chars.resize(idx);
    cout<<idx;
    return 0;
}