#include<bits/stdc++.h>
using namespace std;
bool check(long long int n)
{
 string s = to_string(n);

 for(int i=0;i<s.length();i++)
 {
  if(s[i]!='0' && n%(s[i]-'0')!=0)
   return false;
 }
 return true;
}
int main()
{
 #ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w", stdout);
 #endif

 int t; cin>>t;
 while(t--)
 {
  long long int n; cin>>n;
  for(long long int i=n;i<=1e18; i++)
  {
   if(check(i))
   {
    cout<<i<<endl;
    break;
   }
  }


 }
 
 return 0;
}