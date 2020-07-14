#include <iostream>
#include <deque>

using namespace std;

void printKMax(int arr[], int n, int k)
{
    //Write your code here.
    deque<int> mydeque;

    for (int i = 0; i < n; i++)
    {
        if (mydeque.empty())
        {
            mydeque.push_back(i);
        }

        if (mydeque.front() <= (i - k))
        {
            mydeque.pop_front();
        }

        while (!mydeque.empty() && arr[i] >= arr[mydeque.back()])
        {
            mydeque.pop_back();
        }

        mydeque.push_back(i);

        if (i >= (k - 1))
        {
            cout << arr[mydeque.front()] << " ";
        }
    }

    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t > 0)
    {
        int n, k;

        cin >> n >> k;

        int i;
        int arr[n];

        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        printKMax(arr, n, k);

        t--;
    }

    return 0;
}
