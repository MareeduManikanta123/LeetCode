class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        double maxi = 0;
        for(int i = 0; i < k; i++){
            sum += nums[i];  
        }
        maxi = sum / k;
        for(int i = 1; i <= nums.size()- k; i++){
            sum = sum - nums[i-1] + nums[i-1 + k];
            double maxi1 = sum/k;
            maxi = max(maxi,maxi1);
        }
        return maxi;
        
    }
};