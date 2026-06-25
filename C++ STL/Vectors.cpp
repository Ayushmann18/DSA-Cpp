#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    //we can also write vector<int>vec = {1,2,3,4,5}; instead of all this
    vector<int>vec;
    vec.push_back(11);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(14);
    vec.push_back(19);
    vec.emplace_back(6);
    vec.pop_back();
    vec.erase(vec.begin()+2);
    vec.insert(vec.begin()+2,100);
    int largest = *max_element(vec.begin(),vec.end());
    int smallest = *min_element(vec.begin(),vec.end()); /*vec.end is the last element in a vector whether
it is a garbage value or a value in this case its a garbage value because there is nothing in the last 
index*/

   // vec.clear();clears all the values in a vector
    //vector<int>vec2(vec1); this will add all elements of vec1 in vec2
    for(int val : vec){
        cout<< val <<" ";
    }
    cout<<endl;
    cout<<"Value at idx 2 is : " << vec[2]<< " or " <<vec.at(2)<<endl;
    cout<<" front "<<vec.front()<<endl;
     cout<<" back "<<vec.back()<<endl;
     cout<<"Largest Number : "<<largest<<endl;
      cout<<"Smallest Number : "<<smallest<<endl;

    
/*cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;*/
    return 0;
}
//vector<int>vec(3,10) this will create a vector of size 3 with same value in all i.e 10 
//this we will use in DP-tabulation ; DP vector ot metrics