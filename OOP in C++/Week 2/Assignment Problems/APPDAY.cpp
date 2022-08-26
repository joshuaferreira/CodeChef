#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    int days = 0;
	    if(n <= k){
	        days = 1; 
	    }
	    else{
	        while(n > 0){
	            n -= k;
	            days++;
	        }
	    }
	    cout << days << endl;
	}
	return 0;
}
