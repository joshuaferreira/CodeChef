#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n = 0;
    int tab[1000]={0};
    tab[n++] = -1;
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    for(int i = 1, aa = 2; i < 31; i++, aa *= 2)
    {
        for(int j = 0, bb = 1; j < i; j++, bb *= 2)
        {
            tab[n++] = aa + bb;
        }
    }
    cin >> t;
    while(t--)
    {
        int i, j, mi, s;
        int x;
        cin >> x;
        auto p = lower_bound(tab, tab + n, x);
        mi = min(*p - x, x - *(p-1));
        cout << mi << "\n";
    }
}