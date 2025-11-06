class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int req,c=0;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){

            req=target-nums[i];
            for(int j=0;j<nums.size();j++){
                if(req==nums[j]&&i!=j){
                    ans.push_back(i);
                    ans.push_back(j);
                    c=1;
                    break;
                }
            }
            if(c==1){
                break;
            }
        }
        return ans;
        
    }
};