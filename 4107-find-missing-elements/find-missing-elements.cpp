class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> result;
        sort(nums.begin(),nums.end());
        unordered_map<int,int>ans;
        for(int i=0;i<nums.size();i++){
            ans[nums[i]]++;

        }
        
         for (int num = nums.front(); num < nums.back(); num++) {
            if (ans.count(num) == 0) {
                result.push_back(num);
            }
        }
        return result;
    
        
    }
};