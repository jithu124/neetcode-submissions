class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        int count = 1,max = 1,i,j = 0;
        const int N = nums.size();
        for( i = 0 ; i < N;i++)
        {   count = 1;
            for( j = i+1; j < N; j++)
            {
                if(nums[j] > (nums[j-1]+1))
                {
                    break;
                }
                else if(nums[j] == nums[j-1])
                {
                    
                }
                else if (nums[j] == (nums[j-1]+1))
                {
                    count++;
                }

            }
            cout<<count<<endl;
            i = j-1;
            if(count > max)
            {
                max = count;
            }
        }
        max = N == 0 ? 0 : max;
        return max;
        
    }
};
