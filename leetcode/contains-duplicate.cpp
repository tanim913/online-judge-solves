class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        set <int> s;
        for(int n: nums)
        {
            s.insert(n);
        }
        return (s.size() != nums.size());
    }
};

//another way

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        for(int i = 0; i< nums.size()-1; i++)
        {
            if(nums[i] == nums[i+1]) return true;
        }
        return false;
    }
};
