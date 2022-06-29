class Solution {
public:
    bool checkRecord(string s) {
        int a=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A'){
                a++;
            }
            
        }
        if(s.size()>=3){
        for(int i=0;i<s.size()-2;i++){
            if(s[i]=='L' && s[i+1]=='L' && s[i+2]=='L'){
                return false;
            }
            
        }
        }
        if(a<2){
        return true;
        }
        return false;
    }
};