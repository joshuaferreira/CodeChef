#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
        }
        
        int ans = 0, count = 0;
        for(ans = 0 ; ans < n ; ans++){
            if(a[ans] <= 7){
                count++;
            }
            
            if(count == 7){
                break;
            }
        }
        
        cout << (ans + 1) << endl;
    }
	return 0;
}
