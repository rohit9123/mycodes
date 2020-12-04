#include<iostream>
#include<vector>
using namespace std;

int main(){
    int k=10;
    int a
    //  int size=arr.size();
    //  cout<<size<<endl;
    //     if(size%2==1){
    //         cout<<"here";
    //         cout<<"false"<<endl;
    //         return 0;
    //     }
       
        
       
        int j=arr.size()-1;
        for(int i=0;i<j;i++){
            if((arr[i]+arr[j])%k!=0){
                cout<<arr[i]<<" "<<arr[j]<<" ";
                cout<<"false"<<endl;
                return 0;
            }
            j--;
        }
        cout<<"true"<<endl;
        return 1;
    }
