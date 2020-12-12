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
lli knapsack(int height[],lli beauty[],int n,lli i){
    if(n==0&&i>height[n]){
        return height[n];
    }
    if(n==0){
        return 0;
    }
    
    if(i>height[n]){
        return max(beauty[n]+knapsack(height,beauty,n-1,height[n]),knapsack(height,beauty,n-1,i));
    }

    return knapsack(height,beauty,n-1,i);




}


void solve(){
    int n;
    cin>>n;
    int height[n];
    lli beauty[n];

    for(int i=0;i<n;i++){
        cin>>height[i];
    }
    for(int i=0;i<n;i++){
        cin>>beauty[i];
    }

    // lli dp[n];
    // for(int i=0;i<=n;i++){
    //     dp[i]=0;
    // }

    // dp[0]=0;
  cout<< knapsack(height,beauty,n-1,INT64_MAX)<<endl;

}