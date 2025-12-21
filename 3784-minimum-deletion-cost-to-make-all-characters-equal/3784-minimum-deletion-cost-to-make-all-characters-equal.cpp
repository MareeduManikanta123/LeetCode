class Solution {
public:
    long long minCost(string s, vector<int>& cost) {
        vector<long long> freq(27,0);
        long long sum = 0;
        for(int i = 0; i < s.size(); i++){
            freq[s[i] - 'a'] += cost[i];
            sum += cost[i];
            
        }
        long long maxi = *max_element(freq.begin(),freq.end());
        return sum - maxi;
        
    }
};