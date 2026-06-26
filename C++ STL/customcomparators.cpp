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
bool comparator(pair<int, int> p1, pair<int, int> p2){//if we will not use custom comparator concept it will return value on the basis of the first value
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    if(p1.first < p2.first) return true;//if p1.second = p2.second sort on the basis of first value
    else return false;
}
int main() {
    vector<pair<int, int>> vec = {{3,1}, {2,1}, {7,1}, {5,2}};
    sort(vec.begin(), vec.end(), comparator);
    for(auto p : vec){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}