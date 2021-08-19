class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            string tmp = to_string(nums[i]);
            int count = tmp.length();
            if(count%2==0){
                ans=ans+1;
            }
            
        }
        return ans;
    }
};