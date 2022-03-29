#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int pt1 = 0, pt2 = 1;
        while (pt1 < n && pt2 < n)
        {
            // find greater of arr pt1 and arr pt2
            if (arr[pt1] > arr[pt2])
            {
                arr[pt1] -= arr[pt2];
                arr[pt2] = 0;
                if (pt2 > pt1)
                    pt2++;
                else
                    pt2 = pt1 + 1;
            }
            else
            {
                arr[pt2] - +arr[pt1];
                arr[pt1] = 0;
                if (pt1 > pt2)
                    pt1++;
                else
                    pt1 = pt2 + 1;
            }
        }
        if (pt1 < n)
            cout << arr[pt1] << "\n";
        else
            cout << arr[pt2] << "\n";
    }
}