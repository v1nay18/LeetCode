class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
         vector<char>v(indices.size());
        string ans;
        for(int i=0;i<indices.size();i++){
            v[indices[i]]=s[i];
        }
        for(int i=0;i<v.size();i++){
            ans.push_back(v[i]);
        }
        
        return ans;
    }
};