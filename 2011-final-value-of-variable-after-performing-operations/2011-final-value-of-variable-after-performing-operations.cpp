class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        /*for(int i=0;i<operations.size();i++){
            string s=operations[i];
            for(int j=0;j<s.size()-1;j++){
                if(s[i]=='+'){
                    x++;
                    break;
                }
                else if (s[i]=='-'){
                    x--;
                    break;
                }
                if (s[i]=='X' && s[i+1]=='+'){
                    x++;
                    break;
                }
                else if(s[i]=='X' && s[i+1]=='-'){
                    x--;
                    break;
                }
            }
        }
        return x; */
        
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="X++" || operations[i]=="++X"){
                x++;
            }
           else if(operations[i]=="X--" || operations[i]=="--X"){
                x--;
            }
            
        }
        return x;
        
    }
};