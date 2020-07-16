#include <bits/stdc++.h>

using namespace std;

//Define the structs Workshops and Available_Workshops.
//Implement the functions initialize and CalculateMaxWorkshops
typedef struct Workshops
{
    int s, d, e;
} Workshops;

typedef struct Available_Workshops
{
    int n;
    Workshops *shops;
    Available_Workshops(int t)
    {
        n = t;
        shops = (Workshops *)malloc(t * sizeof(Workshops));
    }
} Available_Workshops;

bool comp(const Workshops &a, const Workshops &b)
{
    if (a.e < b.e)
        return true;
    return false;
}
Available_Workshops *initialize(int start_time[], int duration[], int N)
{
    Available_Workshops *node = new Available_Workshops(N);

    for (int i = 0; i < node->n; i++)
    {
        (node->shops)[i].s = start_time[i];
        (node->shops)[i].d = duration[i];
        (node->shops)[i].e = start_time[i] + duration[i];
    }

    return node;
}

int CalculateMaxWorkshops(Available_Workshops *ptr)
{
    sort(ptr->shops, ptr->shops + ptr->n, comp);
    int ans = 1, t;

    for (int i = 0; i < ptr->n; i++)
    {
        if (i == 0)
        {
            t = (ptr->shops[i]).e;
            continue;
        }

        if ((ptr->shops[i]).s >= t)
        {
            ans++;
            t = (ptr->shops[i]).e;
        }
    }

    return ans;
}

int main(int argc, char *argv[])
{
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int *start_time = new int[n];
    int *duration = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> start_time[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> duration[i];
    }

    Available_Workshops *ptr;
    ptr = initialize(start_time, duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;

    return 0;
}
