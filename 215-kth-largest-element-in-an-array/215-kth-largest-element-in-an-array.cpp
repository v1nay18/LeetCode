class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> min_hip;
        for(int i=0;i<nums.size();i++){
            min_hip.push(nums[i]);
            if(min_hip.size()>k){
                min_hip.pop();
                
            }
        }
        return min_hip.top();
    }
};