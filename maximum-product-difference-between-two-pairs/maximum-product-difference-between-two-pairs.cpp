class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int size=nums.size()-1;
        sort(nums.begin(), nums.end() );
        int a=nums[size]*nums[size-1];
        int b=nums[0]*nums[1];
        return a-b;
    }
};