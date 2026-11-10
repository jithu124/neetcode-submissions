class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int out = 1;

        for(int  i = digits.size()-1;i>=0;i--)
        {
            int sum = digits[i] + out;
            out = max(0,sum - 10 + 1);
            if(sum >=10)
            {                
                sum -=10; 
            }
            digits[i] = sum;
        }

        if(out !=0)
        {
            digits.insert(digits.begin(),out);
        }

        return digits;
        
    }
};
