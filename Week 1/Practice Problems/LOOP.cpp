#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t){
        int A, B, M;
        cin >> A >> B >> M; 
        
        int front, back;
        front = abs(B - A); 
        
        if(B > A){
        back = abs((M - B) + A); 
        }
        else{
        back = abs((M - A) + B); 
        }
        cout << min(front, back) << endl;
        
        t--;
    }
	// your code goes here
	return 0;
}
