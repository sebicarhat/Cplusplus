class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int s = digits.size()-1;
        digits[s]+=1;
        int cf = digits[s]/10; //carry flag
        digits[s]=digits[s]%10;

        for(int i=s-1; i>=0; i--)
            if(cf==1)
            {
                digits[i]+=1;
                cf=digits[i]/10;
                digits[i]=digits[i]%10;
            }
        if(cf==1)
            digits.insert(digits.begin(),1);//if cf is 1 add 1 at begin of nr

    return digits;
    }

};
