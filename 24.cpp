#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q, x, y;
    set<int> s;

    cin >> q;

    for (int i = 0; i < q; i++)
    {
        cin >> y >> x;

        switch (y)
        {
        case 1:
            s.insert(x);
            break;
        case 2:
            s.erase(x);
            break;
        case 3:
            cout << (s.find(x) == s.end() ? "No" : "Yes") << endl;
            break;
        }
    }

    return 0;
}
