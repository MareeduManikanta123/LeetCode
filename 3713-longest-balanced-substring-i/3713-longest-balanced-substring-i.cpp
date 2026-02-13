class Solution {
public:
    int longestBalanced(string s) {
        int n = s.size();
       int maxi = 0;
        for(int i = 0; i < n; i++){
            vector<int> freq(27,0); 
            for(int j = i; j < n; j++){
                freq[s[j] - 'a']++;
                 int value = -1;
                    
                for(int k = 0; k < 26; k++){
                    if(freq[k] != 0){
                        if(value == -1){
                            value = freq[k];
                        }
                        else if(value != freq[k]){
                            value = -1;
                            break;
                        }
                    }
                }
                   if(value > 0) {
                    maxi = max(maxi,j-i + 1);
                   }
                   
                }
                 
            }
        
         return maxi;
       
    }
};