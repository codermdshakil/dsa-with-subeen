#include <bits/stdc++.h>
using namespace std;

int main()
{
    // O(n^3) complexity
    
    int n, count;
    cin >> n;

    count = 0;
    for (int i = 0; i < n; i++) //O(n)
    {
        for (int j = 0; j < n; j++) //O(n)
        {
            for (int k = 0; k < n; k++) //O(n)
            {
                count += 1;
            }
        }
    }

    cout << count << endl;

    return 0;
}