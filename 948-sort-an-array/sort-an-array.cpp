class Solution {
public:
void merge(vector<int>&nums,int low,int mid,int high){
    vector<int>nums1;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
        if(nums[left]<nums[right]){
            nums1.push_back(nums[left]);
            left++;
        }
        else{
            nums1.push_back(nums[right]);
            right++;
        }
    }
    while(left<=mid){
         nums1.push_back(nums[left]);
            left++;

    }
    while(right<=high){
        nums1.push_back(nums[right]);
            right++;

    }
    for(int i=low;i<=high;i++){
        nums[i]=nums1[i-low];
    }
   
}
void mergesort(vector<int>&nums,int low,int high){
    if(low==high) return;
    int mid=(low+high)/2;
    mergesort(nums,low,mid);
    mergesort(nums,mid+1,high);
    merge(nums,low,mid,high);
    return;
}
    vector<int> sortArray(vector<int>& nums) {
        int low =0;
        int high=nums.size()-1;
        mergesort(nums,low,high);
        return nums;
        
        
        

    }
};