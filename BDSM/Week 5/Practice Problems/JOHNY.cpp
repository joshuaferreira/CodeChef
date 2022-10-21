// AS BDS CODECHEF JOHNY
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
        int A[N];
        for(int j = 0;j < N; j++)
            cin >> A[j];
        int K;
        cin >> K;
        int element = A[K - 1];
        int pos = 1;
        for(int j = 0; j < N;j++)
            if(A[j] < element)
                pos++;
        cout << pos << endl;
    }
    return 0;
}