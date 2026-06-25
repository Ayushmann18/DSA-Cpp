//double ended queue
#include<iostream>
#include<vector>
#include<deque>
using namespace std;
int main() {
    deque<int> d;
    d.emplace_back(1);
    d.push_back(2);
    d.push_front(3);
    d.push_front(5);
    d.pop_back();
    d.pop_front();
    for(int val : d){
        cout<< val <<" ";
    }
    cout<<"\n";



    return 0;
}
//list is a doubly linked list while a deque is a dynamic array which can perform a random access while
//a list cannot perform a random access means we can access the value of index using d[] but not l[]