class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        const int N = nums.size();
        vector<vector<int>> res;
       
        sort(nums.begin(),nums.end(),
        [](int a, int b){return a < b;}
        );
        int j,k;
        for(int i = 0 ; i < N; i++)
        {
            auto j = i+1;
            auto k = N-1;
            auto current = nums[i];
            while(j < k)
            {   
                auto sum = nums[j]+nums[k];
                if(sum == -current)
                {
                    res.push_back({current,nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if(sum > -current)
                {
                    k--;
                }
                else
                {
                    j++;
                }
            }
        }


        sort(res.begin(),res.end());
        res.erase(unique(res.begin(), res.end()), res.end());
        return res;
        
    }
};
