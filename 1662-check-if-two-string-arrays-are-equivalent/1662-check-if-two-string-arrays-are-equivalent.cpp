class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string w1,w2;
        for(int i=0;i<word1.size();i++){
            string b=word1[i];
            w1=w1+b;
        }
        for(int i=0;i<word2.size();i++){
            string a=word2[i];
        w2=w2+a;
        }
        if(w2==w1){
            return true;
        }
        else{
            return false;
        }
    }
};