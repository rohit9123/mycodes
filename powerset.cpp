#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> sets;
for(int i=1;i<=4;i++){
    sets.push_back(i);
}
vector<vector<int> >powerset;
vector<int> k;
powerset.push_back(k);
// cout<<powerset.size()<<endl;
for(int i=0;i<sets.size();i++){
    int len=powerset.size();
 
    k.clear();
    for(int j=0;j<len;j++){
        for(int z:powerset[j]){
            k.push_back(z);
        }
        k.push_back(sets[i]);
        powerset.push_back(k);
        k.clear();
    }
    //    k.push_back(sets[i]);
    // powerset.push_back(k);
    // k.clear();
    

}
 for(int j=0;j<powerset.size();j++){
        for(int z:powerset[j]){
            cout<<z<<" ";
        }
        cout<<endl;
        }


}