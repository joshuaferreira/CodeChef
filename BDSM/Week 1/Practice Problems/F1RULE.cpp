#include <iostream>
using namespace std;

int main() {
	// t for taking the number of testcases
	int t;
	cin >> t;
	while(t--){
	    int x, y;   // x is the fastest finish time, y is chef's finish time
	    cin >> x >> y;
	    //chef will only be allowed to race if his finish time is less than 107% of x
	    double c = (double)(x * 1.07);
	    // x * 107/100 == x * 1.07
	    if(y <= c){ // if he finishes in less time he qualifies (he is faster, since he takes less time)
	        cout << "YES" << endl;
	    }
	    else{// in case he doesn't finish faster he doesn't qualify (he is slower)
	        cout << "NO" << endl;
	    }
	}
	return 0;
}
