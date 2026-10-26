class Solution {
public:

    string encode(vector<string>& strs) {
        string s = "";

        string add = "+!+";
        for(auto a : strs)
        {
            s += a;
            s += add;
        }
        return s;

    }

    vector<string> decode(string s) {
        vector<string> res;
        cout<<s<<endl;
        string ret = "";
        const int N = s.size();
        for(int i = 0 ; i < s.size();i++)
        {
 
            if((i<N)&&((i+1)<N)&&((i+2)<N)&&
                (((int)s[i]==43)) &&
                (((int)s[i+1]==33)) &&
                (((int)s[i+2]==43)))
            {
                res.push_back(ret);
                ret = "";
                i +=2;
            }
            else
            {
                ret +=s[i];
            }
        }

        return res;

    }
};
