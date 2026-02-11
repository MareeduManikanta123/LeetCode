class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        if(nums.size() == 0){
            return 0;
        }
        for(int i = 0; i < nums.size(); i++){
            st.insert(nums[i]);
        }
        int maxi = 0;
        for(auto it : st){
            if(st.find(it - 1) == st.end()){
                int cnt = 1;
                int n = it;
                while(st.find(n+1) != st.end()){
                    cnt += 1;
                    n += 1;
                }
                maxi = max(maxi,cnt);
            }
        }
        return maxi;
    }
};