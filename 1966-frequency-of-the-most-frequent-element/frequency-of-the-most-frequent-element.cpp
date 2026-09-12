class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int l = 0;
        int r = 0;
        long long sum = 0;
        int maxFreq =1;
        while(r<nums.size()){
            sum+=nums[r];
            while((1LL*nums[r]*1LL*(r-l+1))-sum>k){
                sum-=nums[l];
                l++;
            }
            maxFreq = max(maxFreq,r-l+1);
            r++;
        }
        return maxFreq;
        
        
        
    }
};