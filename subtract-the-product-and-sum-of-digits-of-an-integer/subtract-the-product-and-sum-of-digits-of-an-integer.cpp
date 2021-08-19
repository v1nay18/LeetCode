class Solution {
public:
    int subtractProductAndSum(int n) {
        vector<int> result;
        int product=1;
        int sum=0;
        while(n){
            result.push_back(n%10);
            n=n/10;
        }
        for(int i=0;i<result.size();i++){
            sum=sum+ result[i];
            product= product*result[i];
        }
            return product-sum;
    }
};