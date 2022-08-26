#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, ctr = 0;
        cin >> n;
        for(int i = 5 ; n/i >= 1 ; i*=5){
            ctr += n/i;
        }
        cout << ctr << endl;
    }
	return 0;
}
