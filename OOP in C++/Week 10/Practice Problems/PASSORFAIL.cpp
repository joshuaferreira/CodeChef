#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, X, P, score = 0;
        cin >> N >> X >> P;
        score = X * 3 + (N - X) * (-1);
        if (score >= P)
        {
            cout << "PASS" << endl;
        }
        else
        {
            cout << "FAIL" << endl;
        }
    }
    return 0;
}
