#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count;
    cin >> n;
    count = 0;

    for (int i = 0; i < n; i++) // O(n^2)
    {
        for (int j = 0; j < n; j++)
        {
            count += 1;
        }
    }

    for (int i = 0; i < n; i++) // O(n)
    {
        count += 1;
    }

    cout << count << endl;

    // O(n^2) is time complexity

    return 0;
}