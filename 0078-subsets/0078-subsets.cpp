class Solution {
public:
    void backtrack(vector<int>& num , int start , vector<int>& current , vector<vector<int>>& result){
        result.push_back(current);
        for(int i=start;i<num.size();i++){
            current.push_back(num[i]);
            backtrack(num, i+1 , current , result);
            current.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>result;
        vector<int>current;
        backtrack(nums,0,current,result);
        return result;
    }
};