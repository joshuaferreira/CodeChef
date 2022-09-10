#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int a, b;
	    cin >> a >> b;
	    
	    if((a + b) < 3){
	        cout << 1;
	    }
	    
	    else if((a+b) < 11){
	        cout << 2;
	    }
	    
	    else if((a+b) <= 60){
	        cout << 3;
	    }
	    
	    else{
	        cout << 4;
	    }
	    
	    cout << endl;
	}
	return 0;
}
