#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int mn = 1000000000;
        int cnt = 0;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += abs(v[i]);
            if (v[i] < 0)
            {
                cnt++;
            }

            mn = min(mn, abs(v[i]));
        }

        if (mn == 0 || cnt % 2 == 0)
        {
            cout << sum << endl;
        }
        else
        {
            cout << sum - 2 * mn << endl;
        }
    }
    return 0;
}