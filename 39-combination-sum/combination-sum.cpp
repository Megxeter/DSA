class Solution {
public:
vector<vector<int>>ans;
void solve(int i,int target,vector<int>&arr,vector<int>&temp){
    if (target==0){
        ans.push_back(temp);
        return;
    }
    if(i==arr.size()) return;
    if(target<0) return ;
    solve(i+1,target,arr,temp);
    temp.push_back(arr[i]);
    solve(i,target-arr[i],arr,temp);
    temp.pop_back();




}

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        solve(0,target,candidates,temp);
        return ans;

        
    }
};