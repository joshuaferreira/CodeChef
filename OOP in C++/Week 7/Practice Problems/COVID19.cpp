#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int x[n];
	    for(int i = 0 ; i < n ;i++)
	        cin >> x[i];
	    
	    int count = 1, worst = 1, best = INT_MAX;
	    for(int i = 0 ; i < n ; i++)
	    {
	        if(abs(x[i]-x[i+1]) < 3)
	        {
    	        count++;
	        }
	        else
	        {
	            worst = max(worst, count);
    	        best = min(best, count);
    	        count = 1;
	        }
	    }
	    cout<<best<<" "<< worst <<endl;
	}
	return 0;
}