//stack is a last in first out (LIFO) structure 
#include<iostream>
#include<stack>
using namespace std;
int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.emplace(3);

    stack<int> s2;
    s2.swap(s);
    cout<<"s.size : "<<s.size()<<endl;
    cout<<"s2.size : "<<s2.size()<<endl;
    
   /* while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();

    }
    cout<<endl;*/

    return 0;
}
//all the three functions such as top(),push(),pop(); the time complexity is O(1)