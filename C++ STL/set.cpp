#include<iostream>
#include<set>//stores element in sorted order and ignores duplicate values
using namespace std;
int main() {
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
//stores only one time could not repeat itself 
   /* s.insert(1);
    s.insert(2);
    s.insert(3);*/

    cout<<"size = "<<s.size()<<" "<<endl;
    cout<<"lower bound = "<<*(s.lower_bound(4))<<endl;
    cout<<"upper bound = "<<*(s.upper_bound(4))<<endl;
     for(auto val : s){
        cout<<val<<" ";
     }
    return 0;
}
//multiset --> multiset<int> s
/*unordered set--> unordered_set<int> s....keys are not sorted like unordered map..randomly distributed --->O(1) 
most of the times rarely O(n)*/
//all functions like erase, insert, count have time complexity O(log n)
/*lower_bound-->returns 4 if availaible in a set otherwise returns number just bigger than that if there is no number 
greater than 4 or 4 itself it will return 0*/
//lower_bound(b)--> means the value shoukd not be less than "b"
//upper_bound(b)-->value shouls be greater than "b" not even equal to "b"  