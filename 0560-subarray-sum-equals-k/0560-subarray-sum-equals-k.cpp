class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> mapp;
        int prefix_sum = 0;
        int cnt = 0;
        mapp[0] = 1;
        for(int i = 0; i < nums.size(); i++){
            prefix_sum += nums[i];
            int remove = prefix_sum - k;
            cnt = cnt + mapp[remove];
            mapp[prefix_sum] += 1;
        }
        return cnt;
    }
};