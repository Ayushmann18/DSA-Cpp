#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout << "Enter a string : ";
    cin >> s;
    string ans = "";
    int count = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '(')
        {
            if(count > 0)
                ans.push_back(s[i]);
            count++;
        }
        else
        {
            count--;
            if(count > 0)
                ans.push_back(s[i]);
        }
    }
    cout << "String after removing outer parentheses:\n";
    cout << ans;
    return 0;
}
//TC : O(n)
//SC : O(n)