#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int>vec = {1,2,3,4,5};
   // vector<int>::iterator it;
    for(auto it = vec.begin() ; it != vec.end(); it++){ //forward  loop
        cout<<*(it)<<" ";
    }
    /*vector<int>::reverse_iterator it; we can write auto instead of this because modern c++ understand 
    these keywords such as rbegin() and rend().*/
    cout<<"\n";
    for(auto it = vec.rbegin(); it != vec.rend(); it++){
        cout<<*(it)<<" ";
    }

    return 0;
}
//auto is used for deriving iterator so that its easy for us to code