//Queue is a First in first out(FIFO) data structure. data is added from back
#include<iostream>
#include<queue>
using namespace std;
int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}
//all the three functions such as top(),push(),pop(); the time complexity is O(1)