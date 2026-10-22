class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        const vector<int>::size_type N = nums.size();
        sort(nums.begin(),nums.end());
        for(vector<int>::size_type i = 0 ; i < N;i++)
        {
            if(((i+1)<N)&&(nums[i]==nums[i+1]))
            {
                return true;
            }
        }

        return false;
        
    }
};