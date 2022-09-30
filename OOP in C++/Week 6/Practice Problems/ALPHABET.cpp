#include <iostream>
#include<string>
using namespace std;

int main() {
    string s;
    cin>>s;
    
    int n;
    cin>>n;
    
    while(n--){
        string w;
        cin>>w;
        
        int pop=0;
        
        for(int i=0;i<w.length();i++){
            int count=0;
            
            for(int j=0;j<s.length();j++){
                if(w[i]==s[j]){
                    count=1;
                }
            }
             
            if(count==0){
                cout<<"No"<<endl;
                pop=1;
                break;
            }
             
        }
        
        if(pop==0){
            cout<<"Yes"<<endl;
        }
    }
	return 0;
}
