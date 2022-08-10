#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	cout << ((n%4 == 0) ? ++n : --n);
	return 0;
}
