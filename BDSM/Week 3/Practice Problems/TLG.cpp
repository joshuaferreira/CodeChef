#include <iostream>
using namespace std;

int main() {
    int n, max = -1, score_a = 0, score_b = 0;
    bool winner;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        int a, b, lead;
        cin >> a >> b;
        score_a += a;
        score_b += b;
        lead = ( (score_a > score_b) ? (score_a - score_b) : (score_b - score_a) );
        if(lead > max){
            max = lead;
            winner = (score_a > score_b);
        }
    }
    
    if(winner){
        cout << 1 << " " << max << endl;
    }
    else{
        cout << 2 << " " << max << endl;
    }
}
