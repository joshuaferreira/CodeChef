#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        string compressed = "";
        char ch;
        int count = 1, len = S.length();
        for(int i = 0 ; i < len ; i++){
            ch = S[i];
            if(i != (len - 1)){
                if(ch == S[i+1]){
                    count++;
                }
                else if(ch != S[i+1]){
                    compressed += ch + to_string(count);
                    count = 1;
                }
            }
            else{
                if(ch != S[i-1]){
                    count = 1;
                    compressed += ch + to_string(count);
                }
                else{
                    compressed += ch + to_string(count);
                    count = 1;
                }
            }
        }
        
        if(compressed.length() < len){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
	return 0;
}
