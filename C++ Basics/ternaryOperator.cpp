//ternary operator syntax
// condition ? expression_if_true : expression_if_false
/**#include<iostream>
using namespace std;
int main() {
    int a, b;
    cout<<"enter a and b : "<<endl;
    cin>>a>>b;
    int max = (a > b) ? a : b;
    cout<<"max is : "<<max<<endl;
    return 0;
}*/
#include<iostream>
using namespace std;
int main(){
    int age = 22;
    (age >=18) ? cout<<"can vote" : cout<<"cannot vote";
    return 0;

}
