#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n, l, x, r;
	    cin >> n >> l >> x;
	    r = n - l;
	    if(n == 0 || l == 0 || x == 0 || r == 0){
	        cout << "0" << endl;
	        continue;
	    }
	    int final = 0;
	    final = min(r, l);
	    
	    cout << (final * x) << endl;
	}
	return 0;
}
