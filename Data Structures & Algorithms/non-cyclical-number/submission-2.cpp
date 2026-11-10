class Solution {
public:
    bool isHappy(int n) {

        set<int> allnumbers;


        while(1)
        {
            auto sum = sumofSquaredofDet(n);
            if(sum == 1)
            {
                return true;
            }
            if(allnumbers.find(sum) != allnumbers.end())
            {
                return false;
            }
            allnumbers.insert(sum);
         

            n = sum;
            

        }
        
    }

    int sumofSquaredofDet(int n)
    {
        int value = 0;
        int digit;
        while(n!=0)
        {
            digit = n%10;
            value += (digit*digit);
            n = n/10;
        }

        return value;
    }
};
