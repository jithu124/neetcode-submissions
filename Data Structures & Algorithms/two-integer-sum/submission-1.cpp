class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> indices;
        int i,j;
        const int N = nums.size();
        for(i = 0 ; i < N;i++)
        {
            indices.push_back({nums[i],i});
        }
        sort(indices.begin(),indices.end());
        i = 0,j = N-1;

        while(i<j)
        {   auto sum = indices[i].first + indices[j].first;
            if(sum == target)
            {
                if (indices[i].second > indices[j].second) {
                    return {indices[j].second,indices[i].second};
                }
                else
                {
                    return {indices[i].second,indices[j].second};
                }
            }
            else if(sum < target)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return {0,0};
        
    }
};
