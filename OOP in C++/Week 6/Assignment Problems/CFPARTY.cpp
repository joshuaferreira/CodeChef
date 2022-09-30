#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    string party = "party";
    
    while(t--){
        string s;
        cin >> s;
        
        int len = s.length();
        for(int i = 0 ; i < len ; i++){
            if(i <= (len - 5)){
                if(s[i] == 'p' && s[i+1] == 'a' && s[i+2] == 'r' && s[i+3] == 't' && s[i+4] == 'y'){
                    i += 2;
                    s[i] = 'w';
                    i++;
                    s[i] = 'r';
                    i++;
                    s[i] = 'i';
                }
            }
        }
        
        cout << s << endl;;
    }
}
