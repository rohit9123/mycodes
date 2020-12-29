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
// lli gcd(lli a,int b){
//     if(b==0){
//         return a;
//     }
//     return gcd(b,a%b);
// }
// lli findlcm(lli a,int b){
//     return (a*b/gcd(a,b));
// }
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
    string s;
    cin>>s;
    // queue<char> ans;
    queue<char> ans1;
    if(s[0]==')'){
        cout<<"NO"<<endl;
        return;
    }
    int count=0;

    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            ans1.push(s[i]);
        }
        if(s[i]=='?'){
            count++;
        }
        if(s[i]==')'){
            if(ans1.size()>0){
                ans1.pop();
            }else if(count>0){
                count--;
            }else{
                cout<<"NO"<<endl;
                return;
                }
            }
        }

 int left=ans1.size();
 if(left>0){
     
     if(count==left){
         cout<<"YES"<<endl;
         
     }
     else if(count<left){
         cout<<"NO"<<endl;
     }
     else{
         count=count-left;
         if(count%2==0){
            
             cout<<"YES"<<endl;
         }else{
             cout<<"NO"<<endl;
         }

     }
     return;
 }
 if(count%2==1){
     cout<<"NO"<<endl;
     return;
 }

cout<<"YES"<<endl;
}