#include <bits/stdc++.h>
using namespace std;

// linear search function 
int linear_search(int ar[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == x)
        {
            return i;
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

    int find_x;
    cin >> find_x;

    // called linear search function
    int result = linear_search(ar, n, find_x);

    if (result > 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

  

    return 0;
}