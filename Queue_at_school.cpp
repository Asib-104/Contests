#include <iostream>
using namespace std;
int main() {
int n,t;
cin>>n>>t;
 string name;
 cin>>name;
 for(int j=0;j<t;j++){
 for(int i=0;i<n;i++){
     if(name[i]=='B' && name[i+1]=='G'){
         name[i]='G';
         name[i+1]='B';
         i++;
     }
 }
 }
 cout<<name<<endl;
}