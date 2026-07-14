#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of an array : "<<endl;
    cin >> n;
    int price[n];
    cout<<"Enter elements of array : "<<endl;
    for(int i = 0; i < n; i++)
    {
        cin >> price[i];
    }
    int maxProfit = 0;
    int bestBuy = price[0];
    for(int i = 1; i < n; i++)
    {
        if(price[i] > bestBuy)
        {
            maxProfit = max(maxProfit, price[i] - bestBuy);
        }
        bestBuy = min(bestBuy, price[i]);
    }
    cout << "maximum profit is : "<<maxProfit<<endl;
    return 0;
}
//time complexity : O(n)
//space complexity : O(1)