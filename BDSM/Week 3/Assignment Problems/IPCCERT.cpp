#include <iostream>
using namespace std;

int main() {
	int n, m, k;
	cin >> n >> m >> k;
	int eligible = 0;
	for(int i = 0 ; i < n ; i++){
	    int mins = 0;
	    int q;
	    for(int j = 0 ; j < k ; j++){
	        int v;
	        cin >> v;
	        mins += v;
	    }
	    cin >> q;
	    if(q > 10 || mins < m){
	        eligible += 0; 
	    }
	    else{
	        eligible += 1; 
	    }
	}
	cout << eligible << endl;
	return 0;
}
