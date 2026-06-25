#include<iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;
int main(){
vector<pair<int , int>> vec = {{1,2} , {2,3} , {3,4}};
vec.push_back({4 ,5});//insert karta hai sirf
vec.emplace_back(4 , 5);//in-place objects ko create karta hai at the time of insertion

      //for(pair<int, int> p : vec){
      for(auto p : vec){
    cout<<p.first<<" "<<p.second<<endl;
}
    return 0;
}