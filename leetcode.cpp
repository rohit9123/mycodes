#include<iostream>
#include<vector>
using namespace std;
 vector<vector<int> > fourSum(vector<int>& nums, int target) {
        vector<vector<int> > ans;
 
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            cout<<nums[i]<<" ";
        }
        cout<<endl;
        if(nums.size()<4){
            
            return ans;
        }
            
        for(int i=0;i<nums.size()-3;i++){
            cout<<"i = "<<i<<endl;
            
            if(nums[i]*4>target){
                cout<<"here";
                break;
            }
            for(int j=i+1;j<nums.size()-2;j++){
                if(nums[j]==nums[j-1]){
                    continue;
                }
                
                int sum=nums[i]+nums[j];
                cout<<"sum = "<<sum<<endl;
                if(sum*2>target){
                    cout<<"here";
                    continue;
                }
                int front=j+1,back=nums.size()-1;
                bool one=true;
                cout<<front<<" = front"<<endl;
                while(one){
                    cout<<"mnnsn"<<endl;
                    cout<<nums[i]+nums[j]+nums[front]+nums[back]<<endl;
                    if((nums[i]+nums[j]+nums[front]+nums[back])==0){
                        cout<<"ghhh"<<endl;
                        cout<<nums[front]<<" "<<num[back]<<endl;
                        vector<int> k;
                        k.push_back(nums[i]);
                        k.push_back(nums[j]);
                        k.push_back(nums[front]);
                        k.push_back(nums[back]);
                      ans.push_back(k);
                        front++;
                        back--;
                        // while(nums[front]==nums[front-1]&&front<back){
                        //     front++;
                        // }
                        // while(nums[back]==nums[back+1]&&back>front){
                        //     back--;
                        // }
                        
                    }

                    if(sum+nums[front]+nums[back]>target){
                        back--;
                    }
                    else if(sum+nums[front]+nums[back]<target){
                        front++;
                    }

                    if(front==back){
                        one=false;
                    }
                    
                }
                
                
                
            }

        }
        for(int i=0;i<ans.size();i++){
            for(int j:ans[i]){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
        return ans;
    }

int main(){
    int target=0;
    vector<int> nums;
    nums.push_back(0);
    nums.push_back(-1);
    nums.push_back(2);
    nums.push_back(-2);
    nums.push_back(0);
    nums.push_back(1);
    fourSum(nums,target);
}