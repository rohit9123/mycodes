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


lli hcf(lli a,lli b){
if(b==0){
    return a;
}
return hcf(b,a%b);
}




lli gcd(lli a,lli b){
    if(b==1){
        return a;
    }
    a=(a*b)/hcf(a,b);
    b=b-1;
    return gcd(a,b);
}



int main(){
    fast;
    int testcase=1;
   
    // cin>>testcase;
    while (testcase--)
    {
        solve();
    }
    
}


void solve(){
    lli n;
    cin>>n;
    lli ans=0;
    if(n==2){
        cout<<3<<endl;
        return;
    }
    else{
        ans=gcd(n,n-1);
    }
    cout<<ans+1<<endl;
}