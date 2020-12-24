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
    string bad;
    int n;
    cin>>n;
    cin>>bad;
    int count=0;
    for(int i=n-1;i>=0;i--){
        if(bad[i]==')'){
            count++;
        }else{
            break;
        }
    }
    if(count>n/2){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}