#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a, b, c, d;
	    cin >> a >> b >> c >> d;
        // if the quadrilateral is cyclic then SUM of OPPOSITE angle is 180
        // a + c = 180
        // b + d = 180
        // therefore
        /*
        How the quadrilateral will look (it will not always be a rectangle this is only for representational purposes)
        _______________
        |a           b|
        |             |           
        |d___________c|
        
        You can also use below logic, since it is explicitly specified that a + b + c + d = 360
	    if( (a+c) == (b+d)){
	        cout << "YES" << endl;
	    }
	    else cout << "NO" << endl;
        ==>However if a + b + c + d = 360, was not specified explicitly, 
        then this is not valid as if we put a = 2, b = 1, c = 2, d = 3
        a + c = 2 + 2 = 4 == b + d = 1 + 3 = 4 
        however the angles a, b, c, d do not make a quadrilateral
        */

	    if( (a+c) == 180 && (b+d) == 180){
	        cout << "YES" << endl;
	    }
	    else cout << "NO" << endl;
	}
	return 0;
}
