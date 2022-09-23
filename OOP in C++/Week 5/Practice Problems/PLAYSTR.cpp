#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        string s, r;
        
        cin >> n;
        cin >> s;
        cin >> r;
        
        int one_s = 0, zero_s = 0, one_r = 0, zero_r = 0;
        for(int i = 0 ; i < n ; i++){
            if(s[i] == '0'){
                zero_s++;
            }
            
            else if(s[i] == '1'){
                one_s++;
            }
            
            if(r[i] == '0'){
                zero_r++;
            }
            
            else if(r[i] == '1'){
                one_r++;
            }
        }
        
        if(one_r == one_s && zero_r == zero_s){
            cout << "YES" << endl;
        }
        
        else{
            cout << "NO" << endl;
        }
    }
	return 0;
}
