class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
                    int check=0;

            while(nums[i]){
               nums[i]= nums[i]/10;
                check=check+1;
            }
            if(check%2==0){
                count=count+1;
            }
        }
        
        return count;
    }
};