#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int n1, n2;
    cout<<"Enter the size of first array : "<<endl;
    cin>>n1;
    int arr1[n1];
    cout<<"Enter the elements of an array : "<<endl;
    for(int i = 0; i<n1; i++){
        cin>>arr1[i];
    }
    cout<<"Enter the size of second array : "<<endl;
    cin>>n2;
    int arr2[n2];
    cout<<"Enter the elements of an array : "<<endl;
    for(int j = 0; j<n2; j++){
        cin>>arr2[j];
    }
    int i = 0, j = 0;
    vector<int> ans;
    while(i<n1 && j<n2){
        if(arr1[i] <= arr2[j]){
            if(ans.empty() || ans.back() != arr1[i]){
                ans.push_back(arr1[i]);
            }
            i++;

        }
        else{
            if(ans.empty() || ans.back() != arr2[j]){
                ans.push_back(arr2[j]);
            }
            j++;
        }
    }
        while(i<n1){
            if(ans.empty() || ans.back() != arr1[i]){
                ans.push_back(arr1[i]);
            }
            i++;
        }
        while(j<n2){
            if(ans.empty() || ans.back() != arr2[j]){
                ans.push_back(arr2[j]);
            }
            j++;
        }
        cout<<"Union of two arrays is : "<<endl;
        for(int x : ans){
            cout<<x<<" ";
        }
    return 0;
}
//time complexity : O(n1+n2)