#include <bits/stdc++.h>
using namespace std;

// create bubble_sort function
void bubble_sort(int ar[], int n)
{
    int temp;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++) //  n - i -1 or n-1
        {
            if (ar[j] > ar[j + 1])
            {
                temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
        }
    }
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

    // called bubble sort function
    bubble_sort(ar, n);

    // print sorted array
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }

    return 0;
}

// time complexity - O(n^2)
