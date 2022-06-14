class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();
        vector <int> prod (n);
        vector <int> left (n);
        vector <int> right (n);

        left[0] = 1;
        for (int i =1; i<n; i++)
        {
            left[i] = left[i-1] * nums[i-1];
        }

        right[n-1]  = 1;
        for(int j = n-2; j>=0; j--)
        {
            right[j] = right[j+1] * nums[j+1];
        }

        for(int i = 0; i<n; i++)
        {
            prod[i] = left[i] * right[i];
        }

        return prod;
    }
};
//another
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();
        vector <int> prod (n);

        prod[0] = 1;
        for (int i =1; i<n; i++)
        {
            prod[i] = prod[i-1] * nums[i-1];
        }

        int r  = 1;
        for(int i = n-1; i>=0; i--)
        {
            prod[i] = prod[i] * r;
            r *= nums[i];
        }


        return prod;
    }
};
