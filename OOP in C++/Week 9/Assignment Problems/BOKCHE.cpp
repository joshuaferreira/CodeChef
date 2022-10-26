#include <bits/stdc++.h>
using namespace std;
// AS BOKCHE

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int N, H;
        cin >> N >> H;
        
        long long int A[N];
        for(int i = 0 ; i < N ; i++)
            cin >> A[i];
        
        long long int l = 1, r = 1e9, k, ans = 1e10;
        
        while(l <= r)
        {
            k = l +((r-l)/2);
            
            long long int hours = 0;
            
            for(int i = 0 ; i < N ; i++){
                hours += ceil( (double)A[i] / (double)k);
            }
            
            if(hours <= H){
                ans = min(ans, k);
                r = k - 1;
            }
            else{
                l = k + 1;
            }
        }
        
        cout << ans << endl;
    }
    return 0;
}