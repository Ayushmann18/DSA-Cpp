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
     vector<int> vec = {1,2,3,4,5};
   //  reverse(vec.begin(), vec.end());
     reverse(vec.begin()+1, vec.begin()+3);//can also reverse some range if you want 
    for(int val : vec){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}