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
bool cmp(pair<int,int>&a,pair<int,int>&b){
    return a.first>b.first;
}

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
   lli n,x;
   cin>>n>>x;
   lli a[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   int i=0,j=1;
   while(j<n&&x>0){
       a[j]=a[j]^a[i];
       a[i]=a[i]^a[i];
       i++;
       j++;
       x--;
   }
   if(x&1){
       a[n-2]=1;
        a[n-1]=a[n-1]^1;
   }
   for(int i=0;i<n;i++){
       cout<<a[i]<<" ";
   }
   cout<<endl;
}