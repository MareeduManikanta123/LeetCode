class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        int n = nums.size();
        vector<int> newarr(n);
        int j = nums.size() - 1;
        newarr[j] = nums[j];
        j--;
        while(j >= 0){
            if(nums[j+1] <= newarr[j  + 1]){
            newarr[j] = nums[j+1];
            }
            else{
                newarr[j] = newarr[j + 1];
            }
            j--;

        }
        long long min1 = 0;
        min1 = nums[0];
        long long min = INT_MIN;
        long long sum = 0;
        for(int i = 0; i < nums.size() - 1; i++){
            sum += nums[i];
            min1 = sum  -  (newarr[i]);
            min = max(min,min1);
        }
        return min;

    }
};