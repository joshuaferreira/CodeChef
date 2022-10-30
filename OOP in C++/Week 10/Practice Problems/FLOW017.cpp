#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int A, B, C;
        cin >> A >> B >> C;
        if ((A > B && A < C) || (A > C && A < B))
            cout << A << endl;
        else if ((B > C && B < A) || (B < C && B > A))
            cout << B << endl;
        else
            cout << C << endl;
    }
    return 0;
}
