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
int n;
cin>>n;
string s,p;
cin>>s;
cin>>p;
int zero=0,zero1=0,one=0,one1=0;
for(int i=0;i<n;i++){
    if(s[i]=='0'){
        zero++;
    }else{
        one++;
    }
    if(p[i]=='0'){
        zero1++;
    }else{
        one1++;
    }
}
// cout<<zero<<zero1<<endl;
if(zero!=zero1||one!=one1){
    cout<<"No"<<endl;
    return;
}
if(one==0){
    cout<<"Yes"<<endl;
    return;

}
if(zero==0){
    cout<<"Yes"<<endl;
    return;
}
for(int i=0;i<n;i++){
    if(s[i]!=p[i]&&s[i]=='0'){
        bool k=false;
        for(int j=i-1;j>=0;j--){
                if(s[j]!=p[j]&&s[j]=='1'){
                    swap(s[i],s[j]);
                    k=true;
                }
        }
        if(!k){
            cout<<"No"<<endl;
            return;
        }
    }if(s[i]!=p[i]&&s[i]=='1'){
        bool k=false;
        for(int j=i+1;j<n;j++){
            // cout<<s[j]<<" "<<p[j]<<endl;
            if(s[j]!=p[j]&&s[j]=='0'){
                // cout<<'h'<<endl;       
                swap(s[i],s[j]);
                k=true;
            }
        }
        if(!k){
            cout<<"No"<<endl;
            return;
        }
    }
}
cout<<"Yes"<<endl;



}