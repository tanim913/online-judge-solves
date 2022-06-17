class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int r = nums[0];

        for (int i = 1, t_min = r, t_max=r; i<nums.size(); i++)
        {
            if(nums[i] < 0) swap(t_min, t_max);

            t_min = min(nums[i], nums[i]*t_min);
            t_max = max(nums[i], nums[i]*t_max);

            r = max(t_max, r);


        }
        return r;
    }
};
