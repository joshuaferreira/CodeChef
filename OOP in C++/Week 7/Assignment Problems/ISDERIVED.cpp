#include <iostream>
using namespace std;

int main() {
	int t, i;
	cin >> t;
	int n;
	for(i = 0; i < t; i++){
	    cin >> n;
	    int arr[7] = {}, count = 1, check[7] = {}, a;
	    int flag = 0;
	    for(int j = 0; j < n; j++){
	        cin >> a;
	        if(a != 7){
	            arr[a-1] += count;
	            if(count == 1){
	                for(int l = 0; l < a-1; l++){
	                    if(check[l] == 0){
	                        flag++;
	                    }
	                }
	                check[a-1] += count;
	            }
	        }
	        else{
	            arr[a-1] += count;
	            if(count == 1){
	                for(int l = 0; l < a-1; l++){
	                    if(check[l] == 0){
	                        flag++;
	                    }
	                }
	                check[a-1] += count;
	                count = -1;
	            }
	        }
	    }
	    for(int k = 0; k < 6; k++){
	        if(arr[k] != 0){
	            flag++;
	        }
	        if(check[k] == 0){
	            flag++;
	        }
	    }
	    if(check[6] == 0){
	        flag++;
	    }
	    if(flag == 0){
	        cout << "yes" << endl;
	    }
	    else{
	        cout << "no" << endl;
	    }
	}
	return 0;
}