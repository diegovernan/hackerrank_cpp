#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Complete the program
    string a, b;
    //char tmp;

    cin >> a >> b;

    cout << a.size() << " " << b.size() << endl;
    cout << a + b << endl;

    // tmp = a[0];
    // a[0] = b[0];
    // b[0] = tmp;
    swap(a[0], b[0]);

    cout << a << " " << b << endl;

    return 0;
}
