#include <bits/stdc++.h>
using namespace std;

// insertion sort function
void insertion_sort(int ar[], int n)
{
    int i, j, item;

    for (i = 1; i < n; i++)
    {
        // ar[i] - কে item এ রাখতে assign করই
        item = ar[i];

        // এখন item এর জন্য opojokto স্থান খুজতে হবে
        j = i - 1;

        // condition  1. index , condition 2 value
        
        // assending order 
        while (j >= 0 && ar[j] > item)
        {
            ar[j + 1] = ar[j];
            j = j - 1;
        }

        // dessending order 
        // while (j >= 0 && ar[j] > item)
        // {
        //     ar[j + 1] = ar[j];
        //     j = j - 1;
        // }
        // ar[j+1] হচ্ছে item এর জন্য opojokto স্থান এবং সেটি আমরা  ইতিমধ্যে খালি করে রেখেসি।
        ar[j + 1] = item;
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

    // called insertion sort function
    insertion_sort(ar, n);

    // print output
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }

    return 0;
}