#include<iostream>
#include<cmath>
using namespace std;

inline double power(double m,int n=2){
    return pow(n,m);
}

int main(){
    double m;
    int n;
    cin>>m>>n;
    double val;
    val=power(m,n);
    cout<<val<<endl;
    return 0;
}