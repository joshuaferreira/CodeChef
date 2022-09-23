#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        
        string s;
        cin >> s;
        
        set<int> ans;
        
        for(int i = 0 ; i < n ; i++){
            if(i == 0){
                ans.insert(x);
            }
            
            if(s[i] == 'R'){
                x++;
                ans.insert(x);
            }
            
            else if(s[i] == 'L'){
                x--;
                ans.insert(x);
            }
        }
        
        cout << ans.size() << endl;
    }
	return 0;
}
