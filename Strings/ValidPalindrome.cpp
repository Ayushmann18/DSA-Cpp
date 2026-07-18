#include<bits/stdc++.h>
using namespace std;
bool isAlphaNum(char ch){
    if((ch >= '0' && ch <= '9')|| 
tolower(ch) >= 'a' && tolower(ch) <= 'z'){
    return true;
}
return false;
    }
int main() {
    string s;
    int n = s.length();
    cout<<"Enter a string : "<<endl;
    getline(cin, s);
    int st = 0;
    int end = n - 1;
    while(st < end){
        if(!isAlphaNum(s[st])){
            st++; continue;
        }
        if(!isAlphaNum(s[end])){
            end--; continue;
        }
        if(tolower(s[st]) != tolower(s[end])){
            cout<<"No Palindrome! "<<endl;
            return 0;
        }
        st++; end--;
    }
    cout<<"Palindrome";
    return 0;
}
//TC : O(n)
//SC : O(1)