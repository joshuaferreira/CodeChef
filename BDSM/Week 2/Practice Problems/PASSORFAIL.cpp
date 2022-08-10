#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, x, p;
        // n ==> total qs, x ==> correct QAs, p ==> passing marks
        
        cin >> n >> x >> p;
        
        // (x * 3) ==> gives marks for all correctly attempted qs
        int marks = (x * 3) - (n - x);
        
        if(marks < p){
            cout << "FAIL" << endl;
        }
        
        else{
            cout << "PASS" << endl;
        }
    }
	return 0;
}
