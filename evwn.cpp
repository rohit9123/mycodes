#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<stack>
#include<queue>
#include<string>
#include<map>
#include<cmath>
 
 
#define ll long long
#define lli long long int
 
#define pb push_back
#define in insert
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 
using namespace std;
void solve();

int main(){
    fast;
    int testcase=1;
   
    cin>>testcase;
    while (testcase--)
    {
        solve();
    }
    
}
void solve(){
    lli x,y;
    cin>>x>>y;
  
        lli out;
        // if(x%2==0&&y%2==0){
        //     lli evenx=x/2;
        //     lli even=y/2;
        //     out=2*evenx*even;
        //     cout<<out<<endl;
        //     return;
        
        // }
        // if(x%2==1&&y%2==1){
        //     lli oddx=1;
        //     lli odd=1;
        //     x=x-1;
        //     y=y-1;
        //     oddx+=x/2;
        //     odd+=y/2;
        //     lli evenx=x/2;
        //     lli even=y/2;
        //     out=oddx*odd+evenx*even;
        //     cout<<out<<endl;
        //     return;
        // }
        lli oddx=0,evenx=0,odd=0,even=0;
        if(x%2==1){
            x--;
            oddx=1;
        }
        oddx+=x/2;
        evenx+=x/2;
        if(y%2==1){
            y--;
            odd=1;
        }
        odd+=y/2;
        even=y/2;
        out=oddx*odd+evenx*even;
        cout<<out<<endl;
    
}