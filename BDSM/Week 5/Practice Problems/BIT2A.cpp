// AS BDS Codechef BIT2A 
#include <iostream>
using namespace std;
int main() 
{
    int T;
    cin >> T;
    while(T--)
    {
        int N;
        cin >> N;
        int A[N], count;
        for(int i = 0; i < N; i++)
            cin >> A[i];
        for(int i = 0; i < N; i++)
        {
            if(A[i] != A[i-1] || i == 0)
            {
                count = 0;
                for(int j = i+1; j < N; j++)
                {
                    if(A[j] > A[i])
                        count ++;
                }
            }
            cout << count << " ";
        }
        cout << endl;
    }
    return 0;
}