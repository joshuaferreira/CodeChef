#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        string s1, s2;
        cin >> s1;
        cin >> s2;
        
        int min = 0, max = 0;
        for(int i = 0 ; i < s1.length() ; i++){
            if(s1[i] == '?' || s2[i] == '?')
                max++;
            
            else if(s1[i] != s2[i]){
                min++;
            }
        }
        
        cout << min << " " << (max + min) << endl;
    }
	return 0;
}
