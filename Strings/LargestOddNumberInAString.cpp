#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cout<<"Enter a string : "<<endl;
    cin>>s;
    int n = s.length();
    for(int i = n-1; i>=0; i--){
        if((s[i] - '0') % 2 == 1){
            cout<<s.substr(0, i+1);
            return 0;
        }
    }
    cout<<"Largest Odd Number in a String is :"<<endl;
    cout<<"";
    return 0;
}