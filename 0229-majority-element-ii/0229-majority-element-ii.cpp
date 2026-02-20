class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mapp;
        vector<int> newarr;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            mapp[nums[i]]++;
        }
        for(auto mp : mapp){
            if(mp.second > n / 3){
                newarr.push_back(mp.first);
            }
        }
        return newarr;
    }
};