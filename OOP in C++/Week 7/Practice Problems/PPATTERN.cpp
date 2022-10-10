#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        int ans[n][n];
        int cur = 1;
        for (int sum = 0; sum <= (n - 1) + (n - 1); sum++)
        {
            for (int row = 0; row < n; row++)
            {
                int col = sum - row;
                if (col >= 0 && col < n)
                    ans[row][col] = cur++;
            }
        }
        
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }
	return 0;
}
