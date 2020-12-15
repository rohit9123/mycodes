#include<iostream>
#include<cmath>
using namespace std;
int z=0;

int find_count(int no,int arr[]){
    if(no==0){
        return 0;
    }
    int k=sqrt(no),q=INT32_MAX;
    for(int i=1;i<=k;i++){
        if(arr[no]==INT32_MAX){
        q=1+min(q,find_count(no-(i*i),arr));
        z++;}
        else
        {   cout<<"return"<<" "<<arr[no]<<endl;
            return arr[no];
        }
        
        
    }
    arr[no]=q;
    return arr[no];
}
int main(){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<=n;i++){
        arr[i]=INT32_MAX;
    }
    int no=find_count(n,arr);
    cout<<arr[n]<<endl;
    cout<<z<<endl;
    return 0;
}

