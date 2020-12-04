#include<iostream>
#include<vector>
#include<map>
 using namespace std;
 vector<vector<int> > combination;
     vector<vector<int> > combinationSum(vector<int>& candidates, int target) {
        map<int,int> find;
        map<int,int> check;
       
           sort(candidates.begin(),candidates.end());
        if(target<candidates[0]){
            return combination;
        }
        for(int i=0;i<candidates.size();i++){
            find[candidates[i]]++;
        }
        
        for(int i=0;i<candidates.size();i++){
            if(candidates[i]==target){
                vector<int>p;
                p.push_back(candidates[i]);
                combination.push_back(p);
            }else if(candidates[i]<target){
                int minus=target-candidates[i];
                cout<<check[candidates[i]]<<" "<<minus<<endl;
                if(find[minus]&&(check[candidates[i]]!=minus)){
                    vector<int> p;
                    p.push_back(candidates[i]);
                    p.push_back(minus);
                    combination.push_back(p);
                    check[minus]==candidates[i];
                };
                int count=2;
                int sum=count*candidates[i];
                // cout<<sum<<endl;
                while(sum<target){
                    vector<int> p;
                    int mini=target-sum;
                    if(find[mini]){
                        // cout<<count<<" ";
                        for(int j=0;j<count;j++){
                            p.push_back(candidates[i]);
                        }
                        p.push_back(mini);
                        // for(int j:p){
                        //     cout<<j<<" ";
                        // }
                        combination.push_back(p);
                    }
                    count+=1;
                    sum=count*candidates[i];
                }
                
            }
            
        }
        
        
        return combination;
    }


int main(){
    vector<int> candidates;
    candidates.push_back(2);
    candidates.push_back(3);
    candidates.push_back(5);
    candidates.push_back(7);
    int target=10;
    combinationSum(candidates,target);
    for(int i=0;i<combination.size();i++){
        for(int j:combination[i]){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}