class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        const int N = s.size();
        int maxlen = 0;
        unordered_set<char> s1;
        int left = 0;

        for(int right = 0 ; right<N;right++)
        {

            while(s1.find(s[right]) != s1.end())
            {
                s1.erase(s[left]);
                left++;
            }
            s1.insert(s[right]);

            maxlen = max(maxlen, right-left+1);
            
        }
        return maxlen;
        
    }
};
