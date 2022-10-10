#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        int height = 0, i = 1;
        while(n > 0){
            n = n - i;
            
            if(n >= 0){
                i = i + 1;
                height = height + 1;
            }
            
            else{
                break;
            }
        }
        
        cout << height << endl;
    }
    return 0;
}
