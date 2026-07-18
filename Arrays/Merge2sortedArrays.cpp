#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter size of first array : "<<endl;
    cin>>n;
    vector<int> arr1(n);
    cout<<"Enter the elements of first array : "<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr1[i];
    }
    int m;
    cout<<"Enter size of second array : "<<endl;
    cin>>m;
    vector<int> arr2(m);
    cout<<"Enter the size of second array : "<<endl;
    for(int i = 0; i<m; i++){
        cin>>arr2[i];
    }
    int index = m+n-1;
    int i = m-1;
    int j = n-1;
    while(i>= 0 && j>= 0){
        if(arr1[i] >= arr2[j]){
            arr1[index] = arr1[i];
            index--; i--;
        }
        else{
            arr1[index] = arr2[j];
            index--; j--;
        }
    } 
    while(j >= 0){
        arr1[index] = arr2[j];
        index--; j--;
    }
        cout << "\nCombined Array: ";
for(int i = 0; i < n; i++)
{
    cout << arr1[i] << " ";
}
for(int i = 0; i < m; i++)
{
    cout << arr2[i] << " ";
}
    return 0;
}