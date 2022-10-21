// AS BDS CODECHEF CK87MEDI
#include <iostream>
using namespace std;
int main() 
{
    int T;
    cin >> T;
    while(T--)
    {
        int N, K, temp;
        bool switched = true;
        cin >> N >> K; 
        int A[N];
        for(int i = 0; i < N; i++)
            cin >> A[i];
        for(int i = 0; i < N-1 && switched; i++)
        {
            switched = false;
            for(int j = N-2; j >= i; j--)
            {
                if(A[j] > A[j+1])
                {
                    switched = true;
                    temp = A[j];
                    A[j] = A[j+1];
                    A[j+1] = temp;
                }
            }
            if(i == (N+K+1)/2)
                break;
        }
        cout << A[(N+K+1)/2 - 1] << endl;
    }
    return 0;
}