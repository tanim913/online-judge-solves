class Solution {
public:
    int maxArea(vector<int>& height) {

        int mx = 0;

        int i = 0, j = height.size()-1;

        while(i<j)
        {
            int min_h = min(height[i],height[j]);
            mx = max (mx, ((j - i) * min_h));
            if(height[i] < height[j]) i++;
            else j--;

        }
        return mx;


    }
};
