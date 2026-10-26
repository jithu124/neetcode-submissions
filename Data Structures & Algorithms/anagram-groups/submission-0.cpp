class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string,vector<string>> um;
        for(int i = 0 ; i< strs.size();i++)
        {
            auto s = strs[i];
            sort(s.begin(),s.end());
            if(um.find(s) != um.end())
            {
               um[s].push_back(strs[i]);
            }
            else
            {
                vector<string> v(1,strs[i]);
                um[s] = v;

            }
            
        }
        
        for(const auto &a : um)
        {
            res.push_back(a.second);
        }

        return res;

    }
};
