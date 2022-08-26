#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int N, deg = 0;
	    cin >> N;
	    int a[N];
	    for(int i = 0 ; i < N ; i++){
	        cin >> a[i];
	        if(a[i] != 0){
	            deg = i;
	        }
	    }
	    
	    cout << deg << endl;
	}
	return 0;
}
