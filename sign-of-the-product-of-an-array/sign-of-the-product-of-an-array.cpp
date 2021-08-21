class Solution {
public:
    int arraySign(vector<int>& nums) {
        int c_neg=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                c_neg+=1;
            }
            else if(nums[i]==0)
                return 0;
        }
        if(c_neg%2==0){
            return 1;
        }
        else{
            return -1;
        }
    }
};