#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int height[n];
    cout<<"Enter height : "<<endl;
    for(int i = 0; i<n; i++){
        cin>>height[i];
    }
    int maxArea = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
           int width = j-i;
           int ht = min(height[i], height[j]);
           int area = width * ht;
           maxArea = max(maxArea, area);
        }
    }
    cout<<"Container with most water : "<<maxArea<<endl;
    return 0;
}
//time complexity : O(n^2)
//space complexity : O(1)