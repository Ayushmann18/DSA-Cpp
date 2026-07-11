#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count = 0;
    int candidate;

    // Find the candidate
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            candidate = arr[i];
        }

        if (arr[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    // Verify the candidate
    count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == candidate)
        {
            count++;
        }
    }

    if (count > n / 2)
    {
        cout << "Majority Element = " << candidate;
    }
    else
    {
        cout << "No Majority Element Found";
    }

    return 0;
}