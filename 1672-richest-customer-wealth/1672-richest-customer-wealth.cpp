class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxx=0;
        for(int i=0;i<accounts.size();i++){
            int sum=0;
            for(int j=0;j<accounts[i].size();j++){
                sum=sum+accounts[i][j];
            }
             maxx=max(maxx,sum);
        }
        return maxx;
    }
};