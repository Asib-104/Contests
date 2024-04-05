#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        vector<string>s(3);
        for(int i=0;i<3;i++)
        {
            cin>>s[i];
        }
        string ans="DRAW";
        for(int i=0;i<3;i++){
            if(s[i][0]==s[i][1] && s[i][1]==s[i][2] &&s[i][0]!='.'){
                ans=s[i][0];
                }
             if(s[0][i]==s[1][i] && s[1][i]==s[2][i] &&s[0][i]!='.'){
                ans=s[0][i];
            }
             if(s[0][0]==s[1][1] && s[1][1]==s[2][2] &&s[0][0]!='.'){
                ans=s[0][0];
            }
             if(s[0][2]==s[1][1] && s[1][1]==s[2][0] &&s[0][2]!='.'){
                ans=s[0][2];
            }
            
                
    
        }
        cout<<ans<<endl;


    }
}