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
    int n,k;
    cin>>n>>k;
   if(n==k){
       for(int i=1;i<=n;i++){
           cout<<i<<" ";
       }
       cout<<endl;
       return;
   }
   if(k<=n/2){
       int m=0;
       for(int i=1;i<=n;i++){
           if(i&1){
               cout<<-i<<" ";
           }else if(i%2==0&&m<k){
               cout<<i<<" ";
               m++;
           }else{
               cout<<-i<<" ";
           }
       }
       cout<<endl;
   }
   else{
       int m=0;
       for(int i=1;i<=n;i++){
           if((i&1)&&m<n-k){
               cout<<-i<<" ";
               m++;
           }else{
               cout<<i<<" ";
           }
       }
       cout<<endl;
   }
     
}