#include<iostream>
#include<map>
#include<unordered_map>//keys are not sorted. we will get random data
using namespace std;
int main() {
    unordered_map<string, int> m;//will give only 1 tv upon multiple display also
     m.emplace("tv", 100);
   /* m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("tv", 100);*/
    m.insert({"laptop", 50});
     m.insert({"fridge", 150});
      m.insert({"watch", 20});

    for(auto p: m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}
//functions like inser,erase,count have time complexity O(1) in majority cases only in some rare case it will be O(n)