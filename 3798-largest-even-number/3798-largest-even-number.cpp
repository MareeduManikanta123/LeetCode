class Solution {
public:
    string largestEven(string s) {
        int n = s.size();
        string str = "";
        
        for(int i = n - 1; i >= 0; i--){
            if((s[i] - '0') % 2 == 0){
                for(int j = 0; j <= i; j++){
                    str.push_back(s[j]);
                    
                }
                break;
            }
            
        }
        return str;
    }
};