#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int p, q, r;
        cin >> p >> q >> r;
        if(p <= q && p <= r){
            cout << "Draw" << endl;
        }
        else if(q <= p && q <= r){
            cout << "Bob" << endl;
        }
        else if(r <= p && r <= q){
            cout << "Alice" << endl;
        }
    }
    
	return 0;
}
