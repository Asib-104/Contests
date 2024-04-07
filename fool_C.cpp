#include<bits/stdc++.h>
using namespace std;

int main()
{
    
long long n;
    cin>>n;
    if(n==0 ||n==1)
    {
        cout<<10<<endl;   
    }
    if(n==2 ||n==4 || n==12)
    {
        cout<<8<<endl;
    }
    if(n==3 || n==10)
    {
        cout<<9<<endl;
    }
    if(n==5 || n==6 || n==7 || n==8 )
    {
        cout<<7<<endl;
    }
    if(n==9)
    {
        cout<<0<<endl;
    }
    if(n==11)
    {
        cout<<6<<endl;
    }
   
}