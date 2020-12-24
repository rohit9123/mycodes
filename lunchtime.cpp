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
   
    // cin>>testcase;
    while (testcase--)
    {
        solve();
    }
    
}
void solve(){
  int n;
  cin>>n;
  lli a[n];
  for(int i=0;i<n;i++){
      cin>>a[i];
  }

  if(n==2){
      cout<<-1<<endl;
      return;
  }
    int time=INT64_MAX;
    for(int i=0;i<n-2;i++){
        lli temp=a[i]^a[i+1];
        if(temp>a[i+2]){
            time=i+1;
        }
    }
    int j=1;
    while(j<n-2){
        lli prev=a[j-1];
        lli temp=a[j];
    for(int i=j;i<n-2;i++){
         temp=temp^a[i+1];
        if(temp<prev){
            time=min(i-j+1,time);
            break;
        }
        if(temp>a[i+2]){
            time=min(i-j+1,time);
            break;
        }
    }
    j++;
    }
    if((a[n-2]^a[n-1])<a[n-3]){
        cout<<1<<endl;
        return;
    }

if(time==INT64_MAX)
cout<<-1<<endl;

else
{
    cout<<time<<endl;
}




}