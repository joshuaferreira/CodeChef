#include <iostream>
using namespace std;

bool prime(int n){
    for(int i = 2 ; i < n ; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t){
	    int n;
	    cin >> n;
	    if(n <= 1){
            cout << "no" << endl;
            t--;
            continue;
        }
	    cout << ((prime(n))? "yes" : "no") << endl;
	    
	    t--;
	}
	return 0;
}

