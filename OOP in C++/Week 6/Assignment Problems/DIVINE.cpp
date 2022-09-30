#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int len = s.length();
    
    int n;
    cin >> n;
    
    while(n--){
        string p;
        cin >> p;
        bool final = true;
        for(int i = 0 ; i < p.length() ; i++){
            bool found = false;
            for(int j = 0 ; j < len ; j++){
                if(p[i] == s[j]){
                    found = true;
                    break;
                }
            }
            
            if(found == false){
                final = false;
            }
        }
        
        if(final){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    
	return 0;
}
