#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--){
        int n, rev, cpy;
        cin >> n;
        rev = 0;
        cpy = n;
        while(cpy != 0){
            rev = (rev * 10) + (cpy % 10);
            cpy = cpy/10;
        }
        
        if(rev == n){
            cout << "wins" << endl;
        }
        else{
            cout << "loses\n";
        }
    }
	return 0;
}
