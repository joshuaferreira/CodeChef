#include <iostream>
#include <cstring>
using namespace std;

int consecutive(string s, int n)
{
    int result = 0, streak = 0;
    for (int i = 0; i < n; i ++)
    {
        if (s[i] == '0')
        {
            streak = 0;
        }
        else
        {
            streak ++;
            if (streak > result)
            {
                result = streak;
            }
        }
    }
    return result;
}


int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int amount1 = 0;
        string s;
        cin >> s;
        for (int i = 0; i < 30; i++)
        {
            if (s[i] == '1')
            {
                amount1 ++;
            }
        }
        amount1 = amount1 * a;
        int streak = consecutive(s, 30);
        int amount2 = streak * b;
        cout << amount1 + amount2 << endl;
    }
	// your code goes here
	return 0;
}