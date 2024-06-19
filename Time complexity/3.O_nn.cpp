#include <bits/stdc++.h>
using namespace std;

int main()
{
    // O(n^2) complexity

    int n, count;
    cin >> n; // 5
    count = 0; // output = 5*5 = 25
    
    for (int i = 0; i < n; i++) // O(n)
    {
        for (int j = 0; j < n; j++) // O(n)
        {
            count += 1;
        }
    }

    cout << count << endl;

    return 0;
}