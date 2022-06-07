class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size();

        unordered_map <int, int> m;

        for (int i = 0; i< n; i++)
        {
            int x = target - nums[i];
            auto it = m.find(x);
            if(it != m.end()) return {it->second, i};
            m[nums[i]] = i;

        }

        return{-1,-1};

    }

};
