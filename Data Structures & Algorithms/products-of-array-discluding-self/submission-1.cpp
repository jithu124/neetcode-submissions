class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        const int N = nums.size();
        vector<int> Pleft(N,1);
        vector<int> Pright(N,1); 
        vector<int> res; 

        for(int i = 1 ; i < N; i++) 
        {
            Pleft[i] = Pleft[i-1]*nums[i-1];

        }
        for(int i = N-2 ; i >= 0; i--) 
        {
            Pright[i] = Pright[i+1]*nums[i+1];
        }

        for(int i = 0 ; i < N; i++) 
        {
            res.push_back(Pleft[i]*Pright[i]);
        }
        return res;

    }
};
