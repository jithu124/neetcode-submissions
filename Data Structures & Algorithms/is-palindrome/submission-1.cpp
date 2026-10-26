class Solution {
public:
    bool isPalindrome(string s) {

        int N = s.length();
        string m;
        for(int i = 0 ; i < N ; i++)
        {
            auto temp = s[i];
            if((temp != ' ')&&
            (
            (((temp) >=65) && (temp <= 90))
            ||(((temp) >=97) && (temp <= 122))
            ||(((temp) >=48) && (temp <= 57))
            )
            )
            {
                temp = (temp >= 97)? (temp - 32): temp;
                m.push_back(temp);
            }
        }
        cout<<m<<endl;
        N = m.length();
        for(int i = 0 ; i < N/2 ; i++)
        {
            if(m[i] != m[N-i-1])
            {
                return false;
            }
        }
        return true;
        
    }
};
