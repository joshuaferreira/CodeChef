#include <iostream>
using namespace std;

int factorial(int fact){
    if(fact != 0)
        return fact * factorial(fact - 1);
    else
        return 1;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << factorial(n) << endl;
    }
	return 0;
}
