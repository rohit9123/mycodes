#include<iostream>
#include<string.h>
using namespace std;
int c[15][18];
int maximum(string s1,string s2,int l1,int l2,int m1,int m2){
if(l1==m1||l2==m2){
    return 0;
}

if(c[l1][l2]!=-1){
    return c[l1][l2];
}

if(s1[l1]==s2[l2]){
    c[l1+1][l2+1]=maximum(s1,s2,l1+1,l2+1,m1,m2);
    c[l1][l2]=1+c[l1+1][l2+1];
}
else{
    c[l1+1][l2]=maximum(s1,s2,l1+1,l2,m1,m2);
    c[l1][l2+1]=maximum(s1,s2,l1,l2+1,m1,m2);
    c[l1][l2]=max(c[l1+1][l2],c[l1][l2+1]);
}
return c[l1][l2];



}
int main(){
    
    
    string a="abcdgdkkckckc", b="hdhajfhjakckckkc";
   
    for(int i=0;i<a.length()+1;i++){
        for(int j=0;j<b.length()+1;j++){
            c[i][j]=-1;
        }
    }
    cout<<maximum(a,b,0,0,a.length(),b.length());
}