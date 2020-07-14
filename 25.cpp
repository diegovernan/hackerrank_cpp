#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q, type, y;
    string x;
    map<string, int> m;

    cin >> q;

    for (int i = 0; i < q; i++)
    {
        cin >> type >> x;

        switch (type)
        {
        case 1:
            cin >> y;

            if (m.find(x) == m.end())
                m.insert(make_pair(x, y));
            else
                m[x] += y;
            break;
        case 2:
            m.erase(x);
            break;
        case 3:
            cout << (m.find(x) != m.end() ? m[x] : 0) << endl;
            break;
        }
    }

    return 0;
}
