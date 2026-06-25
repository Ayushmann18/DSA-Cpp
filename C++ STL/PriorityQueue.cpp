//largest value = highest priority
#include<iostream>
#include<queue>
using namespace std;
int main() {
    priority_queue<int> q;
    q.push(5);
    q.push(3);
    q.push(10);
    q.push(4);
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<"\n";
    priority_queue<int, vector<int>, greater<int>> q1;

    /*this greater<int> is a functor(function object) used when we need the smallest integers at the 
    top not the largest one at top*/
    q1.push(5);
    q1.push(3);
    q1.push(10);
    q1.push(4);
    while(!q1.empty()){
        cout<<q1.top()<<" ";
        q1.pop();
    }
    cout<<"\n";

    return 0;
}
//In a priority queue time complexity of a top() is O(1) while for push() and pop() Time complexity is O(log n)