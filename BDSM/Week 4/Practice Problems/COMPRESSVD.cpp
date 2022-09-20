#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--){
        int n, ans;
        cin >> n;
        //'ans' is a copy variable that stores the number of frames originally
        ans = n;
        
        int a[n];
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
        }
        
        for(int i = 0 ; i < n ; i++){
            //First Element
            //If else If, to avoid array out of bounds error
            if(i == 0)
            {
                //Comparing number at index 0 with number at index 1
                if(a[i] == a[i + 1])
                {
                    a[i] = -1; //since a[i] > 0, by assigning a[i] = -1, we are effectively deleting the frame/number
                }
                //Seperate if condition for first element because we cannot compare number at index 0 with number at index -1
            }
            
            //Last Element
            else if(i == (n-1)){
                //Comparing number at last index position with number at second last index positon
                if(a[i] == a[i - 1])
                {
                    a[i] = -1; //since a[i] > 0, by assigning a[i] = -1, we are effectively deleting the frame/number
                }
                //Seperate if condition for last element because we cannot compare number at last index position with number
                //at last + 1 
            }
            
            //Any Other Elements
            else{
                //if numbers at both sides of current are equal, we delete it
                if(a[i] == a[i - 1] || a[i] == a[i + 1]){
                    a[i] = -1; //since a[i] > 0, by assigning a[i] = -1, we are effectively deleting the frame/number
                }
            }
        }
        
        for(int i = 0 ; i < n ; i++){
            //decrease value of ans for every deleted frame
            if(a[i] == -1){
                ans--;
            }
        }
        
        cout << ans << endl;
    }
	return 0;
}
