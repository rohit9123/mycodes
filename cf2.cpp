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
bool mycompare(map<lli,lli>a,map<lli,lli> b){
    
}
lli gcd(lli a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
lli findlcm(lli a,int b){
    return (a*b/gcd(a,b));
}
void solve(){
   



}