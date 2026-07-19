#include<bits/stdc++.h>
using namespace std;
int main() {
    string s,goal;
    cout<<"Enter a string s and goal : "<<endl;
    cin>>s>>goal;
    if(s.length() != goal.length()){
        cout<<"False";
        return 0;
    }
    string temp = s + s;
    if(temp.find(goal) != string::npos){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}
//TC : O(n)
//SC : O(1)