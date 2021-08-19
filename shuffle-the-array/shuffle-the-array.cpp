class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result;
        result.push_back(nums[0]);
        for(int i=0;i<n;i++){
            result.push_back(nums[i+n]);
            if(i+1<n){
            result.push_back(nums[i+1]);
            }
        }
        return result;
    }
};