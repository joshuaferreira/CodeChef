// AS BDS CODECHEF EID
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int T;
    cin >> T;
    while(T--)
    {
        int N, diff = -1;
        cin >> N;
        vector <int> A(N);
        for(int i = 0; i < N; i++)
            cin >> A[i];
        sort(A.begin(), A.end());
        int Y = A.front();
        for(int X : A)
        {
            if(diff == -1)
            {
                diff = 10e9;
                continue;
            }
            diff = min(diff, X-Y);
            Y = X;    
        }
        cout << diff << endl;
    }
    return 0;
}