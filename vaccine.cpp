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
    int day=0;
    int d,v,d1,v1,p;
    cin>>d>>v>>d1>>v1>>p;
    // if(p==0){
    //     cout<<0<<endl;
    //     return;
    // }
    if(d==d1){
        int day=d1;
        int production=v+v1;
        int cap=production;
        while(production<p){
            day++;
            production+=cap;
        }
        cout<<day<<endl;
    }else{



        int start=d>d1?d1:d;
        int production=d>d1?v1:v;
        int cap=production;




        if(d<d1){
        while(start<d1&&p>production){
            start++;
            production+=cap;
        }
        if(p=<production){
            cout<<start<<endl;
            return;
        }
        cap=v+v1;
        production+=cap;
       
        while(p>production){
            production+=cap;
            start++;
        }
        cout<<start<<endl;
        }else{



        
        while(start<d&&p>production){
        start++;
        production+=cap;
        }
           

        if(p=<production){
            cout<<start<<endl;
            return;
        }
        cap=v+v1;
        production+=cap;
        while(p>production){
            production+=cap;
            start++;
        }
        cout<<start<<endl;
        }

    }


};
