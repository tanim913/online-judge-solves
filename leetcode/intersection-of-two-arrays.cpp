class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set <int> s;
        vector <int> v;

        for (int i: nums1)
        {
            for(int j : nums2)
            {
                if(i == j)
                    s.insert (i);
            }
        }

        for(int n: s)
            v.push_back(n);
        return v;

    }
};
