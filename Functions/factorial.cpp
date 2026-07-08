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
int factorialN(int n){
  int fact = 1;
  for(int i = 1; i<=n; i++){
    fact *= i;
  }  
  return fact;
}
int main() {
    cout<<factorialN(5)<<endl;
    cout<<factorialN(10)<<endl;
    return 0;
}