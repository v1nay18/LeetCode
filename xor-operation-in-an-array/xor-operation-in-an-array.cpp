class Solution {
public:
    int xorOperation(int n, int start) {
        vector <int> result;
        int ans=0;
        for(int i=0;i<n;i++){
            result.push_back( (start + (2*i)  ));
        }
              for(int j=0;j<result.size();j++){
                 ans^=result[j];
              }    
                             return ans;
    }
};