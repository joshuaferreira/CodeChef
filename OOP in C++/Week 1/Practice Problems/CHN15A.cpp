#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a[2];
	    
	    for(int i = 0; i<2; i++){
	        cin >> a[i];
	    }
	    
	    int n = a[0];
	    int k = a[1];
	    int ctr = 0;
	    
	    int b[n];
	    
	    for(int i = 0; i<n; i++){
	        cin >> b[i];
	        b[i] += k;
	        if ( (b[i]%7) == 0 ) ctr++;
	    }
	    
	    cout << ctr << endl;
	}
	return 0;
}
