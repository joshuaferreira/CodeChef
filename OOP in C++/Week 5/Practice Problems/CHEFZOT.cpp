#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    
    int max = 0, ans = 0;
    bool flag = true;
    
    for(int i = 0 ; i < n ; i++){
        if(a[i] != 0){
            max++;
        }
        else{
            if(max > ans){
                ans = max;
            }
            max = 0;
            flag = false;
        }
    }
    
    if(max > ans){
        ans = max;
    }
    
    if(flag){
        cout << n << endl;
        return 0;
    }
    
    cout << ans << endl;
    return 0;
}
