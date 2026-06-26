#include<iostream>//map is implemented as a self balancing tree
#include<map>//map sorts our data in the ascending order by default like laptop before tv because l occurs first compared to t 
using namespace std;
int main() {
    map<string, int> m;
    m["tv"] = 100;
    m["laptop"] = 100;
    m["headphones"] = 50; 
    m["tablets"] = 120; 
    m["watch"] = 50; 
    m.insert({"camera", 25});
    m.emplace("mobile", 150);
    m.erase("tv");
    
    for(auto p : m){
        cout<< p.first <<" "<< p.second <<endl;
    }
    cout<<"count = "<<m.count("laptop")<<endl;
    cout<<"count = "<<m["laptop"]<<endl;
    if(m.find("tv") != m.end()){
        cout<<"found\n";
    }
    else{
        cout<<"not found\n";
    }
    return 0;
}
//functions like inser,erase,count have time complexity O(log n)