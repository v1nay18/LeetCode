class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxx=0;
        
        for(int i=0;i<sentences.size();i++){
            string s=sentences[i];
            int a=0;
            for(int j=0;j<s.size();j++){
                if(s[j]==' '){
                    a++;
                    maxx=max(maxx,a);
                }
            }
        }
        return maxx+1;
        
    }
};