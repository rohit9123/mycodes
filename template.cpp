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

void solve(){
 lli n;
 cin>>n;
 int f[n];
 int c[n];
 for(int i=0;i<n;i++){
     cin>>f[i];
 }
 for(int i=0;i<n;i++){
     cin>>c[i];
 }
lli mincost=100000000;
 for(lli i=0;i<n;i++){
     lli gas=f[i];
     lli maxgas=f[i];
     lli cost=c[i]*f[i];
     int k=0;
     for(int j=i;k<n&&gas>0;j=(j+1)%n){
         gas--;
         gas=(gas+f[j])>maxgas?maxgas:gas+f[j];
         k++;
     }
     if(k==n)
     mincost=min(mincost,cost);
 }
 


cout<<mincost<<endl;

}