class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        int a= nums.size();
        for(int i=0;i<a;i++){
            for(int j=i+1;j<a;j++){
                if(nums[i]+nums[j]==target){
                    result.push_back(i);
                    result.push_back(j);
                    
                }
            }
        }
            
     return result;   
    }
};