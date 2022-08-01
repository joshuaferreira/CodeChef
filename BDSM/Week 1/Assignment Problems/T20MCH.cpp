#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int r, o, c, max_run;
	cin >> r >> o >> c;
	max_run = c + (20 - o) * 36;
	
	if(max_run > r){
	    cout << "YES" << endl;
	}
	
	else{
	    cout << "NO" << endl;
	}
	
	return 0;
}
