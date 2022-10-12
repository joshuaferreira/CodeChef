#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        vector<long long> stacks;
        for(int i=0; i<N; i++){
            long long x;
            cin>>x;
            auto it = upper_bound(stacks.begin(), stacks.end(), x);
            if(it == stacks.end())
                stacks.push_back(x);
            else
                stacks[it - stacks.begin()] = x;
        }
        cout<<stacks.size()<<" ";
        for(auto el: stacks){
            cout<<el<<" ";
        }
        cout<<endl;
    }
}