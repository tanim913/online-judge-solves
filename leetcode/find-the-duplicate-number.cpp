class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map <int,int> m;
        for(int i = 0; i<nums.size(); i++)
        {
            m[nums[i]]++;
        }
        int dup ;
        for (auto e : m)
        {
            if(e.second > 1)
            {
                dup = e.first;
                break;
            }
        }
        return dup;
    }
};
