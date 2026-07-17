#include <iostream>
#include <vector>
using namespace std;
bool linearSearch(vector<int> &arr, int x)
{
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] == x)
            return true;
    }
    return false;
}
int main()
{
    int n;
    cout<<"Enter Size of an array : "<<endl;
    cin >> n;
    vector<int> arr(n);
    cout<<"Enter elements in an array : "<<endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int longest = 0;
    for(int i = 0; i < n; i++)
    {
        int x = arr[i];
        int count = 1;
        while(linearSearch(arr, x + 1))
        {
            x++;
            count++;
        }
        longest = max(longest, count);
    }
    cout << longest;
    return 0;
}
//time complexity : O(n^2)
//space complexity : O(1)