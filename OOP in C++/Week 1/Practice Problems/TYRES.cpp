#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t){
	    int N;
	    cin >> N;
	    N %= 4;
	    if(N) cout << "YES" << endl;
	    else cout << "NO" << endl;
	    t--;
	}
	return 0;
}
