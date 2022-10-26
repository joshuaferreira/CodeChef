#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        long long int S[n];
        for(int i = 0 ; i < n ; i++){
            cin >> S[i];
        }
        
        long long int diff = 1e9;
        
        for(int i = 0 ; i < n ; i++){
            for(int j = i + 1 ; j < n ; j++){
                if(S[i] > S[j]){
                    swap(S[i], S[j]);
                }
            }
        }
        
        for(int i = 0 ; i < (n - 1) ; i++){
            long long int skill_diff = abs(S[i] - S[i + 1]);
            if(skill_diff < diff)
                diff = skill_diff;
        }
        
        cout << diff << endl;
    }
	return 0;
}
