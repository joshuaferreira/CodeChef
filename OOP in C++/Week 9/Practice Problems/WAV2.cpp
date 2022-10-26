#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    vector<int> v;
    vector<int> v2;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(int j=0;j<q;j++){
        int a;
        cin>>a;
        v2.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<q;i++){
        auto x=lower_bound(v.begin(),v.end(),v2[i]);
        auto y=upper_bound(v.begin(),v.end(),v2[i]);
        if(x!=y) {
            cout<<"0"<<endl;
            continue;
        }
        if( ( n- (y-v.begin()) ) %2==0 ) cout<<"POSITIVE"<<endl;
        else if(( n- (y-v.begin()) ) %2!=0) cout<<"NEGATIVE"<<endl;
    }
    return 0;
}