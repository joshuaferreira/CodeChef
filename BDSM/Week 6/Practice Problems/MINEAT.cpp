#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, h;
        cin >> n >> h;
        
        long long int a[n];
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
        }
        
        long long int l = 1;
        long long int r = 1e9;
        
        long long int k, ans = 1e10;
        
        while(l <= r){
            k = l +((r-l)/2);
            
            long long int hours = 0;
            
            for(int i = 0 ; i < n ; i++){
                hours += ceil( (double)a[i] / (double)k);
            }
            
            if(hours <= h){
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
