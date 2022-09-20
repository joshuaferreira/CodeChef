#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int a, b;
        a = 0;
        b = 0;
        
        char winner = s[0];
        
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] == '1'){
                a++;
            }
            else{
                b++;
            }
        }
        
        if(a > b){
            cout << "WIN" << endl;
            continue;
        }
        
        else if(a < b){
            cout << "LOSE" << endl;
        }
        
        else{
            if(winner == '1')
                cout << "WIN" << endl;
            else
                cout << "LOSE" << endl;
        }
    }
    return 0;
}
