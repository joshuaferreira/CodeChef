#include <iostream>
using namespace std;

int main() {
    int n;  // Number of Soldiers
    cin >> n;   
    //Variable 'soldier' is used to store the number of weapons a soldier is carrying
    int odd = 0, even = 0, soldier;

    //if the number of soldiers carrying even number of weapons is more than the number of soldiers carrying odd number of weapons
    //only then is the army ready for battle
    for(int i = 0; i < n ; i++){
        soldier = 0;
        cin >> soldier;
        (soldier%2 == 0)?even++:odd++;
    }
    
    //You can use an array to solve this problem as well, however a single variable takes less space, 
    //and also helps the program execute efficently 

    if(even > odd){
        cout << "READY FOR BATTLE" << endl;
    }
    else{
        cout << "NOT READY" << endl;
    }

	return 0;
}
