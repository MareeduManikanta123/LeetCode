class Solution {
public:
    int longestBalanced(string s) {
        int maxi = 0;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            vector<int> freq(27, 0);
            for (int j = i; j < n; j++) { 
                freq[s[j] - 'a']++;
                int value = -1;
                for (int m = 0; m <= 26; m++) {
                    if (freq[m] != 0) {
                        if (value == -1) {
                            value = freq[m];
                        } else if (freq[m] != value) {
                            value = -1;
                            break;
                        }
                    }
                }
                if (value > 0) {
                    maxi = max(maxi, j - i + 1);
                }
            }
        }
        return maxi;
    }
};