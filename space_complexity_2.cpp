#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, even[101];
    for (int i = 0; i < 101; i++) //O(n)
    {
        even[i] = 0;
    }

    for (int i = 0; i < 101; i += 2) //O(n)
    {
        even[i] = 1;
    }

    cin >> n;
    if (even[n])
    {
        cout << "Even - " << n << endl;
    }
    else
    {

        cout << "Odd - " << n << endl;
    }

    return 0;
}

// space complexity - O(n)
