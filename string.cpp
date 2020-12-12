#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<stack>
#include<queue>
#include<string>
#include<map>
#include<cmath>
#include<string>
 
 
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
    string s;
    cin>>s;
    if(s.length()==1){
        cout<<1<<endl;
        return;
    }
    lli count=1;
    vector<string> check;
    bool a=false;
    bool b=false;
    for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                a=true;
            }
            if(s[i]=='1'){
                b=true;
            }
    }
    if(a&&!b){
        cout<<s.length()<<endl;
    }
    else if(!a&&b){
        cout<<s.length()<<endl;
    }else{
        count+=2;
        int len=2;
        int m=3;
        while(len<s.length()){
            set<string> dc;
        for(int i=0;i<=s.length()-len;i++){
            string k="";
            k+=s[i];
            int sub=i+1;
            for(sub;sub<i+len;sub++){
                k+=s[sub];
            }
            // cout<<k<<endl;
            check.push_back(k);
        }
            if(len<3){
                
                for(int i=0;i<check.size();i++){
                    dc.insert(check[i]);
                }
                // cout<<2<<" "<<dc.size()<<endl;
                count+=dc.size();
                check.clear();
            }else{
                int minus=0;
               map<string,int> help;
               set<string>dc;
               for(int i=0;i<check.size();i++){
                   help[check[i]]++ ;
               }
               for(int i=0;i<check.size();i++){
                   
                   string k="";
                   int even=0;
                   for(char z:check[i]){
                       k+=z;
                       if(z=='1')
                       even++;
                   }
                   if(help[k]==-1){
                       continue;
                   }
                   if(even%2==0&&even>1){
                       string z=k;
                    //    cout<<k<<endl;
                       k=string(k.rbegin(),k.rend());
                       if(z==k){
                           continue;
                       }
                       if(help[k]==0){
                        //    cout<<k<<" "<<0<<endl;
                        // cout<<"enterd"<<endl;
                       }else{
                           help[k]=-1;
                           minus++;
                       }
                   }
               }
            //    for(auto it=help.begin();it!=help.end();it++){
            //        if(it->second>0){
            //            count++;
            //        }
                
            //    }
            //    count-=minus;
            
               minus=0;
               for(auto it=help.begin();it!=help.end();it++){
                //    cout<<it->first<<" "<<it->second<<endl;
                   if(it->second>0){
                       dc.insert(it->first);
                   }
               }
               count+=dc.size();

    }
    len++;
    check.clear();
    
    }
     cout<<count<<endl;
}
}