#include <bits/stdc++.h>
// AS DISVAL
using namespace std;

int main() 
{
    int T;
    cin >> T;
    
    while(T--)
    {
        int N, operations = -1;
        cin >> N;
        
        vector <int> A(N);
    	for(int i = 0; i < N; i++)
    	    cin >> A[i];
    	
    	sort(A.begin(), A.end());
    	
    	int Y = A.front();
    	for(int X : A)
    	{
    	    if(operations == -1)
    	    {
    	        operations++;
    	        continue;
    	    }
            if(X == Y)
    	        operations++;
            Y = X;    
    	}
        
        cout << operations << endl;
        
    }
    
	return 0;
}