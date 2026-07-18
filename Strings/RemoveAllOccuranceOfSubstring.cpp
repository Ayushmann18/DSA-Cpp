#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cout<<"Enter a string : "<<endl;
    cin>>s;
    string part;
    cout<<"Enter part of a string to be removed : "<<endl;
    cin>>part;
    while(s.length() > 0 && s.find(part) < s.length()){
        s.erase(s.find(part), part.length());
    }
    cout<<"String after removing its substring : "<<s<<endl;
    return 0;
}
//TC : O(n*m)
//SC : O(n)