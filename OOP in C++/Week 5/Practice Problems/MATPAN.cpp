#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a[26];
        for(int i = 0 ; i < 26 ; i++){
            cin >> a[i];
        }
        
        string s;
        cin >> s;
        
        int price = 0;
        
        for(int i = 97 ; i < 123 ; i++){
            char ch = (char)i;
            bool flag = false;
            for(int j = 0 ; j < s.length() ; j++){
                if(ch == s[j]){
                    flag = true;
                    break;
                }
            }
            
            if(flag == false){
                price += a[(i - 97)];
            }
        }
        
        cout << price << endl;
    }
	return 0;
}
