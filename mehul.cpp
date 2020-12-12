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
   lli a[n+1];
   
   for(int i=1;i<=n;i++){
       cin>>a[i];
   }
  
  
           lli i=1,j=i+1;
           for(i;i<n&&(x=x-1)>0;i++){
               if(a[i]==0){
                   continue;
               }
               bool t=false;
               for(j=i+1;j<=n;j++){
                   if((a[j]^a[i])<a[j]){
                       a[j]=a[j]^a[i];
                       a[i]=0;
                       t=true;
                       break;
                   }
                   
               }
               if(t==false){
                   a[n]=a[n]^a[i];
                       a[i]=0;
                       
                      
                   }
                   
                   
           }

    if(x>0){
        if(x%2==1&&n==2){
            a[n-1]=1;
            a[n]^=1;
        }
     
    }
     
    for(i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;



 
}