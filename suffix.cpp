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
    int n;
    cin>>n;
    lli a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==2){
        cout<<1<<endl;
    }
    cout<<(-2)-(-2)<<endl;
    sort(a,a+n);
    lli day=0;
    lli diff=a[n/2]-a[0];
    lli diff2=a[n-1]-a[n/2];
    if(diff>diff2){
        day+=(a[n/2])-(a[1]);
        day+=(a[n-1])-(a[n/2]);
    }else{
        day+=(a[n-2])-(a[n/2]);
        day+=(a[n/2])-(a[0]);
    }
    cout<<day<<endl;


}