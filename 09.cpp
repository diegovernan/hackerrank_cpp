#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q, k;

    cin >> n >> q;

    vector<int> a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> k;

        for (int j = 0; j < k; j++)
        {
            int a_i_j;

            cin >> a_i_j;

            a[i].push_back(a_i_j);
        }
    };

    for (int i = 0; i < q; i++)
    {
        int a_i, j;

        cin >> a_i >> j;

        cout << a[a_i][j] << endl;
    }

    return 0;
}
