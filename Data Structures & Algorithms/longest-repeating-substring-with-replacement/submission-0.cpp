class Solution {
public:
    int characterReplacement(string s, int k) {
        int retunvalue=0;
        
        unordered_map<char,int> freq;
        int maxfreq = 0;
        int left = 0;
        for(int right = 0; right < s.size();right++)
        {
            freq[s[right]]++;
            maxfreq = max(maxfreq,freq[s[right]]);

            while((right - left + 1 - maxfreq)> k)
            {
                freq[s[left]]--;
                left++;
            }
            retunvalue = max(retunvalue,right-left+1);

        }

        return retunvalue;
    }
};
