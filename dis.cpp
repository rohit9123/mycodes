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
    float d;
    cin>>n>>d;
    if(d==1){
        cout<<n<<endl;
        return;
    }
    int corona[n];
    int danger=0;
    for(int i=0;i<n;i++){
        cin>>corona[i];
        if(corona[i]>=80||corona[i]<=9){
            danger++;
        }
    }
    int notdanger=n-danger;
    int day=0;
    if(danger%d!=0){
        day++;
    }
    if(notdanger%d!=0){
        day++;
    }
    day+=(danger/d)+(notdanger/2);
    // cout<<ceil(danger/d)+ceil(notdanger/d);
    cout<<day<<endl;
}