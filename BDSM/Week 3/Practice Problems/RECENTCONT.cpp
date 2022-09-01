#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        int n, s_ctr = 0;
        cin >> n;
        for(int i = 0 ; i < n ; i++){
            cin >> s;
            if(s[0] == 'S')
                s_ctr++;
        }
        
        cout << s_ctr << " " << (n - s_ctr) << endl;
    }
    return 0;
}
