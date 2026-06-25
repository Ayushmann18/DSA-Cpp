#include<iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;
int main() {
    //pair<int , int> p = {1,5};
    //pair<string , int> p = {"Ayushmann" , 5};
    //pair<char , int> p = {'a' , 5};
    pair<int , pair<char , int>> p = {1 , {'a' , 5}};//pair of pair
    cout<<p.first<<endl;
    cout<<p.second.first<<endl;
    cout<<p.second.second<<endl;
    return 0;
}