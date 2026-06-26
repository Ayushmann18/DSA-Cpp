#include<iostream>
#include<map>//arranges in ascending order
using namespace std;
int main() {
    multimap<string, int> m;//can create multi tv values but not in map
    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("tv", 100);
     m.insert({"laptop", 50});
     m.insert({"fridge", 150});
      m.insert({"watch", 20});

    //m.erase("tv");deletes all the tv 
    m.erase(m.find("tv"));//deletes only one tv 
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }

    return 0;
}