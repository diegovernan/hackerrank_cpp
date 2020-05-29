#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    // Complete the code.
    int i;
    long l;
    char ch;
    float f;
    double d;

    cin >> i >> l >> ch >> f >> d;

    cout << i << endl;
    cout << l << endl;
    cout << ch << endl;
    cout.precision(3);
    cout << fixed << f << endl;
    cout.precision(9);
    cout << fixed << d << endl;

    return 0;
}