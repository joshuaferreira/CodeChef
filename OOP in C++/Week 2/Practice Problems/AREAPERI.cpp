#include <iostream>
using namespace std;

int main() {
    int l, b, p, a;
    cin >> l >> b;
    p = 2 * (l + b);
    a = l * b;
    if(p == a){
        cout << "Eq\n" << p << endl;
    }
    else if(p > a){
        cout << "Peri\n" << p << endl;
    }
    else{
        cout << "Area\n" << a << endl;
    }
	return 0;
}
