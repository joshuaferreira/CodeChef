#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int w = 0, input;
        for(int i = 0 ; i < 7 ; i++){
            cin >> input;
            if(input)
                w++;
        }
        if(w > 3){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
	return 0;
}
