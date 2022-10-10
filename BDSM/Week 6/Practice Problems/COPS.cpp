#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int M, x, y;
        cin >> M >> x >> y;
        
        bool not_safe[101] = {false};
        
        int max_houses = x * y;
        
        int arr[M];
        for(int i = 0 ; i < M ; i++)
            cin >> arr[i];
            
            
        for(int i = 0 ; i < M ; i++){
            int pos = arr[i];
            
            int left = pos - max_houses, right = pos + max_houses, start, end;
            
            if(left <= 1)
                start = 1;
            else
                start = left;
                
            if(right >= 100)
                end = 100;
            else
                end = right;
                
            for(int i = start ; i <= end ; i++){
                not_safe[i] = true;
            }
        }
        
        int count = 100;
        for(int i = 1 ; i < 101 ; i++){
            if(not_safe[i]){
                count--;
            }
        }
        
        cout << count << endl;
        
    }
	return 0;
}
