#include <iostream>
using namespace std;

int main() {
    int n, w, l;
    cin >> n >> w >> l;
    
    int h[n], r[n];
    for(int i = 0 ; i < n ; i++){
        cin >> h[i] >> r[i];
    }
    
    //w -> wood ordered
    //l -> minimum length
    int months = 0;
    while(true){
        int wood = 0;
        for(int i = 0 ; i < n ; i++){
            if(h[i] >= l){
                wood += h[i];
            }
        }
        
        if(wood >= w){
            cout << months << endl;
            break;
        }
        
        else{
            for(int i = 0 ; i < n ; i++){
                h[i] += r[i];
            }
            
            months++;
        }
    }
	return 0;
}
