#include<bits/stdc++.h>
using namespace std;//2-Pointer
int main(){
    int n;
    cout<<"Enter size of an array : "<<endl;
    cin>>n;
    int height[n];
    cout<<"Enter heights of each wall : "<<endl;
    for(int i = 0; i<n; i++){
        cin>>height[i];
    }
    int left = 0;
    int right = n - 1;
        int maxArea = 0;
    while(left < right)
    {
        int width = right - left;
        int h = min(height[left], height[right]);
        int area = width * h;
        maxArea = max(maxArea, area);
        if(height[left] < height[right])
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    cout<<"Container with most water : "<<maxArea<<endl;
    return 0;
}
//time complexity : O(n)
//space complexity : O(1)