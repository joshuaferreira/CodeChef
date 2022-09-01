#include <iostream>
using namespace std;

int main() {
	int ctr = 0;
	int a;
	for(int i = 0 ; i < 4 ; i++){
	    cin >> a;
	    if(a >= 10)
	        ctr++;
	}
	cout << ctr;
	return 0;
}
