#include <bits/stdc++.h>
using namespace std;

int binary_search(int ar[], int n, int x)
{
    int left, right, mid;
    left = 0;
    right = n - 1;

    while (left <= right)
    {
        mid = (left + right) / 2;
        if (ar[mid] == x)
        {
            return mid;
        }
        else if (ar[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}

int main()
{

    int n;
    cin >> n;
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int x;
    cin >> x;
    // sorted array accending order
    // sort(ar, ar+n);

    // called binary search function
    int result = binary_search(ar, n, x);

    if (result >= 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}