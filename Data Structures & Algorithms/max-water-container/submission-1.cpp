class Solution {
public:
    int maxArea(vector<int>& heights) {

        auto max = -1;

        int i = 0, j = heights.size()-1;
        while(i < j)
        {
            auto minindex = (heights[i] < heights[j] )? i :j;
            auto area = (j-i)*heights[minindex];
            if(area > max)
            {
                max = area;
            }
            if(minindex == i)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return max;
    }
};
