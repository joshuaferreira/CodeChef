#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        int a, ans = 7, disp = 0;
        for(int i = 0 ; i < n ; i++){
            cin >> a;
            if(!(a >= 1 && a <= 7)){
                continue;
            }
            else{
                ans--;
            }
            
            if(ans == 0){
                disp = (i+1);
            }
        }
        
        cout << (disp) << endl;
    }
    return 0;
}
