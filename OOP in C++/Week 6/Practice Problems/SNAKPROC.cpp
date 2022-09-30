#include <iostream>
using namespace std;

int main() {
	int r;
	cin >> r;
	
	while(r--){
	    int l, i;
	    cin >> l;
	    
	    char ch;
	    
	    int ans = 0;
	    
	    for( i = 0 ; i < l ; i++){
	        cin >> ch;
	        
	        if(ch == '.'){
	            continue;
	        }
	        
	        else if(ch == 'H' && ans == 0){
	            ans = ans + 1;
	        }
	        
	        else if(ch == 'T' && ans == 1){
	            ans = ans - 1;
	        }
	        
	        else{
	            ans = 2;
	            break;
	        }
	    }
	    
	    if(ans == 0){
	        cout << "Valid" << endl;
	    }
	    
	    else {
	        cout << "Invalid" << endl;
	    }
	    i++;
	    for(; i < l ; i++)
	        cin >> ch;
	    
	}
	
	return 0;
}