#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
        }
        
        int more = 0, less = 0, boasters = 0;
        for(int i = 0 ; i < n ; i++){
            more = 0;
            less = 0;
            for(int j = 0 ; j < n ; j++){
                if(a[j] <= a[i]) 
                    less++;
                else 
                    more++;
                
            }
            if(less > more) 
                boasters++;
        }
        
        cout << boasters << endl;
    }
	return 0;
}
