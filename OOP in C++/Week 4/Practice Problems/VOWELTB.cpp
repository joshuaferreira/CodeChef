#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;
    switch(c){
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << "Vowel" << endl;
            break;
        default:
            cout << "Consonant" << endl;
            break;
    }
	return 0;
}
