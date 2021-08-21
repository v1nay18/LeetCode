class Solution {
public:
    int numberOfSteps(int num) {
        int count=0;
        if(num%2!=0){
            count=count+1;
        }
        while(num>0){
            num=num/2;
            if(num%2!=0){
                num=num-1;
                count=count+2;
            }
            else{
                count=count+1;
            }
            
        }
        return count;
    }
};