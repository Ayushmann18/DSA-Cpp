#include<iostream>
#include<vector>
#include<list>
#include<queue>
#include<set>
#include<stack>
#include<unordered_map>
#include<unordered_set>
#include<deque>
#include<algorithm>
using namespace std;
int main() {
    vector<int> vec = {3,5,1,8,2};

sort(vec.begin(), vec.end());//by default sorting is done in ascending order
sort(vec.begin(), vec.end(), greater<int>());//to display in descending order we do this 

    for(int val : vec){
        cout<<val<<" ";
    }
    cout<<endl;
//to sort in descending order we do sor(start, end , comparator())
    return 0;
}
//when we sort a pair, they are sorted on the basis of their first value
//time complexity generally for sorting algorithm is O(n logn)
//to sort the value of pair on the basis of their second value we need to use custom comparators
