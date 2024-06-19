#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1 to n sum 

    int n, result;
    cin >> n;
    result = 0;
    for (int i = 1; i <= n; i++)
    {
        result = result + i;
    }
    cout << result << endl;

    return 0;
}

/**
 * O(n) Time complexity
 * Inputer মানের সাথে যদি Operation এর সংখ্যা নীরবর করে তাহলে O(n);
 * 
 * Complexity Grammer 
 * 1. Worst case নিয়ে চিন্তা করতে হবে।
 * 2. Constant বাদ দিতে হবে।
 */