#include <bits/stdc++.h>
using namespace std;

// seletion sort function
void selection_sort(int ar[], int n)
{
    int index_min, temp;
    for (int i = 0; i < n - 1; i++)
    {
        index_min = i;
        for (int j = i + 1; j < n; j++)
        {
            // assending order

            if (ar[j] < ar[index_min])
            {
                index_min = j;
            }

            // dessending order

            // if (ar[j] > ar[index_min])
            // {
            //     index_min = j;
            // }
        }
        // reverse
        if (index_min != i)
        {
            // manualy swap

            // temp = ar[i];
            // ar[i] = ar[index_min];
            // ar[index_min] = temp;

            // using swap function
            swap(ar[i], ar[index_min]);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int ar[n];

    // take array input
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    // called selection sort
    selection_sort(ar, n);

    // print sorted array
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }

    return 0;
}