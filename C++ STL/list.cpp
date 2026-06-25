/*in list we can push element from front and back similarly we can pop the element from front and back and 
similarly we can emplace back element from front and back */
#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main() {
//we can also initialize like this list<int> l = {1,2,3,4,5}
    list<int> l;
    l.emplace_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(5);
    l.pop_back();
    l.pop_front();
    for(int val : l){
        cout<< val <<" ";
    }
    cout<<"\n";



    return 0;
}
//difference between list and vector
//vector is implemented as a dynamic array while list is implemented as a doubly linked list