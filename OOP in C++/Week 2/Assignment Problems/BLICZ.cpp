#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, a, b, ans;
        cin >> n >> a >> b;
        
        ans = 2 * (180 + n) - (a + b);
        
        cout << ans << endl;
    }
	return 0;
}
