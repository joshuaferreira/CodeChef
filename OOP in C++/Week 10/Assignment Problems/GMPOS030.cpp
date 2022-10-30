#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int p, q, r;
        cin >> p >> q >> r;
        
        if((r * 2) >= (q - p)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
	return 0;
}
