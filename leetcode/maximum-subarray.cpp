class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx = nums[0];
        int curr = 0;

        for(int n: nums)
        {
            if(curr < 0) curr = 0;
            curr +=n;
            mx = max(mx, curr);
        }

        return mx;
    }
};
