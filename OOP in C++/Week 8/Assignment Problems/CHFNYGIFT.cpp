#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        long long int p[n];
        for(int i = 0 ; i < n ; i++){
            cin >> p[i];
        }
        
        for(int i = 0 ; i < n ; i++){
            for(int j = (i + 1) ; j < n ; j++){
                if(p[j] > p[i]){
                    int t = p[j];
                    p[j] = p[i];
                    p[i] = t;
                }
            }
        }
        
        long long int diff = 1e10;
        for(int i = 0 ; i < (n - 1) ; i++){
            long long int diff_loop = p[i] - p[i + 1];
            diff = ((diff_loop < diff) ? diff_loop : diff);
            if(diff == 0){
                break;
            }
        }
        
        cout << diff << endl;
    }
	return 0;
}
