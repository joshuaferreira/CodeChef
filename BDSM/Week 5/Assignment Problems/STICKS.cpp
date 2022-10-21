#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0 ; i < n ; i++)
            cin >> A[i];
        
        bool area = false;
        int l, b;
        
        for(int i = 0 ; i < n ; i++){
            for(int j = i + 1 ; j < n ; j++){
                if(A[i] < A[j]){
                    swap(A[i], A[j]);
                }
            }
        }
        
        for(int i = 0 ; i < n ; i++)
            cout << A[i] << " ";
    }
	return 0;
}
