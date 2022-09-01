#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, input, ctr = 0;
        cin >> n;
        for(int i = 0 ; i < n ; i++){
            cin >> input;
            if(input >= 1000)
                ctr++;
        }
        
        cout << ctr << endl;
    }
    
    return 0;
}
