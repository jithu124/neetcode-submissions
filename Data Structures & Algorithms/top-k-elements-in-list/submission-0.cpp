class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        vector<int> res;
        vector<pair<int,int>> pairs; 
        unordered_map<int,int> u;

        for(auto &i : nums)
        {
            u[i]++;
        }

        for(const auto &p : u)
        {
            pairs.push_back({p.second,p.first});
        }
        sort(pairs.begin(),pairs.end(), greater<pair<int,int>>());
 
        for(int i = 0; i < k; i++)
        {
            res.push_back(pairs[i].second);
        }
        return res;

        
    }
};
