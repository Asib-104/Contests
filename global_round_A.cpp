#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>v;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            v.push_back(i);
        }
    }
    if(v.size()%2==1 || v.size()==2 && v[0]==v[1]-1){
        cout<<"NO"<<endl;
        return;
    }
    else{
        cout<<"YES"<<endl;
       
    }
}
    int main(){
        int t;
        cin>>t;
        while(t--){
            solve();
        }
    }
